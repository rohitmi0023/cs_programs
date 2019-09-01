# Author: Rohit Mishra

# Merge sort is one of the most efficient sorting algorithms. It works on the principle of Divide and Conquer.
# Merge sort repeatedly breaks down a list into several sublists until each sublist consists of a single element
# and merging those sublists in a manner that results into a sorted list.


def mergeSort(lists):
    if len(lists) > 1:
        mid = len(lists)//2
        l = lists[:mid]
        r = lists[mid:]
        # print("Splitting left side: ", l)
        mergeSort(l)
        # print("Splitting right side: ", r)
        mergeSort(r)
        i = j = k = 0
        while i < len(l) and j < len(r):
            if l[i] < r[j]:
                lists[k] = l[i]
                i += 1
            else:
                lists[k] = r[j]
                j += 1
            k += 1

        while i < len(l):
            lists[k] = l[i]
            i += 1
            k += 1

        while j < len(r):
            lists[k] = r[j]
            j += 1
            k += 1
    # print("Merging ", lists)


lists = [30, 50, 20, 40, 1]
mergeSort(lists)
print("Using Merge Sort ", lists)
