import heapq

def insert(arr, newNum):
    size = len(arr)
    if size == 0:
        heapq.heappush(arr, newNum)
    else:
        heapq.heappush(arr, newNum)    
    
def deleteNode(arr, num):
    size = len(arr)
    i = 0
    for i in range(0, size):
        if num == arr[i]:
            break
        if i == len(arr)-1 and num != arr[i]:
            print("Enter valid item to delete!")
            return
    print(arr[i])    
    arr[i], arr[0] = arr[0], arr[i]
    heapq.heappop(arr)
    print("After deleting an element: " + str(arr))

arr = []
insert(arr, 32)
insert(arr, 4)
insert(arr, 9)
insert(arr, 5)
insert(arr, 2)
print ("Min-Heap array: " + str(arr))
deleteNode(arr,32)