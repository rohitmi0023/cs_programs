#include <bits/stdc++.h> 
using namespace std; 
   
// Given an array of size n, where every element 
// is k away from its target position, sorts the 
// array in O(nLogk) time. 
int sortK(int arr[], int n, int k) 
{ 
    // Insert first k+1 items in a priority queue (or min heap) 
    //(A O(k) operation). We assume, k < n. 
    priority_queue<int, vector<int>, greater<int> > pq(arr, arr + k + 1); 
    // i is index for remaining elements in arr[] and index 
    // is target index of for current minimum element in 
    // Min Heapm 'hp'. 
    int index = 0; 
    for (int i = k + 1; i < n; i++) { 
        arr[index++] = pq.top(); 
        pq.pop(); 
        pq.push(arr[i]); 
    } 
    while (pq.empty() == false) { 
        arr[index++] = pq.top(); 
        pq.pop(); 
    } 
} 
   
void printArray(int arr[], int size) 
{ 
    for (int i = 0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 

int main() 
{ 
    int k = 1; 
    int arr[] = { 2, 16, 13, 12, 56, 8 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    sortK(arr, n, k);    
    cout << "Following is sorted arrayn"; 
    printArray(arr, n); 
    return 0; 
}