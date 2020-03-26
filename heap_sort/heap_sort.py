def heapify(arr, n, i):
    largest = i
    l = 2*i+1
    r = 2*i+2
    if l < n and arr[l] > arr[largest]:
        largest = l
    if r < n and arr[r] > arr[largest]:
        largest = r
    if largest != i:
        arr[i], arr[largest] = arr[largest], arr[i]
        heapify(arr, n, largest)

def heapSort(arr):
    # To build a max heap
    for i in range(n, -1, -1):
        heapify(arr, n, i)
    # To create a sorted array
    for i in range(n-1, 0, -1):
        arr[i], arr[0] = arr[0], arr[i] # Placing the root node to the last position of the array
        heapify(arr, i, 0)    

arr = [21, 23, 1, 34, 2]
n = len(arr)
heapSort(arr)
print(arr)