def partition(arr, low, high):
    i = low - 1
    pivot = arr[high]
    for j in range(low, high):
        if arr[j] <= pivot:
            i+=1
            arr[j], arr[i] = arr[i], arr[j]
    arr[i+1], arr[high] = arr[high], arr[i+1]
    return i+1
 
def quickSort(arr, low, high):
    if low < high:
        partitionIndex = partition(arr, low, high)
        quickSort(arr, low, partitionIndex - 1)
        quickSort(arr, partitionIndex + 1, high)

arr = [12, 1, 23, 42, 22]
high = len(arr) - 1
quickSort(arr, 0, high)
print(arr)