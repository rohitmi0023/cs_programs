# Author: Rohit Mishra

# Insertion sort is the sorting mechanism where the sorted array is built having one item at a time. The array
#  elements are compared with each other sequentially and then arranged simultaneously in some particular order.

lists = [30, 20, 50, 40]
for i in range(1, len(lists)):
    for j in range(i-1, -1, -1):
        if lists[i] < lists[j]:
            lists[i], lists[j] = lists[j], lists[i]
print('Using Insertion Sort', lists)
