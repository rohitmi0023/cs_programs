def insertion_sort_func(lists):
    # n - 1 iterations starting from the 1 index i.e. 2nd element
    for i in range(1, len(lists)):
        # Picked up card to be the key
        key = lists[i]
        j = i - 1
        #  i - 1 iterations till the key is greater
        while j >= 0 and key < lists[j]:
            # shifting the compared element by index 1
            lists[j+1] = lists[j]
            # decreamenting j to go more leftwards
            j = j - 1
        # placing the picked up value just before we found that the key
        # is more than the compared element, remember that the compared 
        # element is j
        lists[j+1] = key
    return lists        
        
# User defined length of the list
SIZE = input("Enter the number of elements ")
# Creating an empty list
LISTS = []
for k in range(0, SIZE):
    element = input('Enter the number: ')
    # appending each user defined value into the list
    LISTS.append(element)

print('Using Insertion Sort', insertion_sort_func(LISTS))
