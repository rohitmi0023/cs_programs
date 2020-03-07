def selection_sort_func(lists):
    # n-1 th iterations
    for i in range(0, len(lists)-1):
        # Assume the 1st element to have the min. index
        minIndex = i
        # n-i iterations to get the min. index
        for j in range(i+1, len(lists)):
            if lists[minIndex] > lists[j]:
                minIndex = j
        lists[minIndex], lists[i] = lists[i], lists[minIndex]
    return lists    

# User defined length of the list
SIZE = input("Enter the number of elements ")
# Creating an empty list
LISTS = []
for k in range(0, SIZE):
    element = input('Enter the number: ')
    # appending each user defined value into the list
    LISTS.append(element)

print('Using Selection Sort ', selection_sort_func(LISTS))
