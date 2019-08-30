# Author: Rohit Mishra
# Bubble sort is based on the idea of repeatedly comparing pairs of adjacent elements and then swapping their
# positions if they exist in the wrong order.

lists = [50, 20, 10, 5, 6]
for i in range(len(lists)):
    k = i
    for j in range(k, len(lists)):
        if(lists[i] > lists[j]):
            lists[i], lists[j] = lists[j], lists[i]
print('Using Bubble Sort ', lists)
