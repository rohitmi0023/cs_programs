#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int arr[50], size;
    cout << "Enter the size of array : " << endl;
    cin >> size ;
    cout << "Enter the elements: " << endl;
    // user-defined elements in the array
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // In total we have to make length - 1 iterations
    for (int i = 0; i < size; i++)
    {
        // In an iteration we have to further make length - i iterations
        for (int j = 0; j < size - i; j++)
        {
            // Comparing the current and the next element
            if (arr[j] > arr[j+1])
            {
                // swapping if the current element is bigger than the next one
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "Sorted array is: " << endl;
    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << endl;
    }
}