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
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j;
        j = i - 1;
        while (j >= 0 && key < arr[j])
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
    cout << "Sorted array is: " << endl;
    for (int k = 0; k < size; k++)
    {
        cout << " " << arr[k] ;
    }
}