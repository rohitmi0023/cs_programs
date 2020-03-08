def binary_search(lists, l, r, x):
    while l <=r:
        mid = (l + r)//2
        if lists[mid] == x:
            return mid
        elif lists[mid] > x:
            return binary_search(lists, l, mid - 1, x)
        else:
            return binary_search(lists, mid+1, r, x)
    return -1        

lists = [1, 3, 10, 23, 34, 50]
print("Elements are {} \n".format(lists))
value = input("Enter the number to be searched: ")
result = binary_search(lists, 0, len(lists), value)

if result != -1: 
    print ("Element is present at index % d" % result) 
else: 
    print ("Element is not present in array") 