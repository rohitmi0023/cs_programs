#include <iostream>
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
    for (int i = 0; i < size-1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[min_index] > arr[j])
            {
                min_index = j;
            }
        }
        int temp;
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
    cout << "Sorted array is: " << endl;
    for (int k = 0; k < size; k++)
    {
        cout << " " << arr[k] ;
    }
}