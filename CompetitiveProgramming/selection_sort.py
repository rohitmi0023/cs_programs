# Author: Rohit Mishra

# The Selection sort algorithm is based on the idea of finding the minimum or maximum element in an unsorted array
#  and then putting it in its correct position in a sorted array.

# Assume that the array A=[7, 5, 4, 2] needs to be sorted in ascending order.

# The minimum element in the array i.e.  is searched for and then swapped with the element that is currently located
# at the first position, i.e. . Now the minimum element in the remaining unsorted array is searched for and put in
# the second position, and so on.


plists = [50, 20, 10, 5, 6]
for j in range(len(plists)):
    minIndex = j
    k = minIndex
    for i in range(k, len(plists)):
        if plists[minIndex] > plists[i]:
            minIndex = i
    plists[minIndex], plists[j] = plists[j], plists[minIndex]
print('Using Selection Sort ', plists)
