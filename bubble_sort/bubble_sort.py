def bubble_sort_func(lists):
    # In total we have to make length - 1 iterations
    for i in range(1, len(lists)):
        # In an iteration we have to further make length - i iterations
        for j in range(0, len(lists) - i):
            # Comparing the current and the next element
            if lists[j] > lists[j + 1]:
                # swapping if the current element is bigger than the next one
                lists[j], lists[j + 1] = lists[j + 1], lists[j]
    return lists

# User defined length of the list
SIZE = input("Enter the number of elements ")
# Creating an empty list
LISTS = []
for k in range(0, SIZE):
    element = input('Enter the number: ')
    # appending each user defined value into the list
    LISTS.append(element)

print("Sorted array is: ", bubble_sort_func(LISTS))
