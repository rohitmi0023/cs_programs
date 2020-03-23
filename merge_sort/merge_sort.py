def merge(lists, p, q, r):
    L = lists[p : q + 1]
    M = lists[q + 1 : r + 1]
    # print(L, M), useful to check that you have really understand it or not
    l1 = len(L)
    l2 = len(M)
    i = j = 0
    k = p 
    while i < l1 and j < l2:
        if L[i] <= M[j]:
            lists[k] = L[i]
            i += 1
        else:
            lists[k] = M[j]
            j += 1
        k += 1
    while i < l1:
        lists[k] = L[i]
        i += 1
        k += 1
    while j < l2:
        lists[k] = M[j]
        j += 1
        k += 1              
    
def mergeSort(lists, p, r):
    if p < r:
        q = (p + r)/2;
        mergeSort(lists, p, q)
        mergeSort(lists, q + 1, r)
        merge(lists, p, q, r)

lists = [12, 2, 40, 32, 20]
size_lists = len(lists)
mergeSort(lists, 0, size_lists - 1)
print(lists)