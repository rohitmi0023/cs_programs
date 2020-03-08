#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int binarySearch(int sorted_list[], int start, int end, int value)
{
    while (start <= end)
    {
        int mid = (start + end)/2;
        if (sorted_list[mid] == value)
            return mid;
        else if (sorted_list[mid] > value)
            return binarySearch(sorted_list, start, mid - 1, value);
        else 
            return binarySearch(sorted_list, mid + 1, end, value);
    }
    return -1;
}

int main()
{
    int sorted_list[] = {1, 4, 34, 56, 123, 540};
    int len = sizeof(sorted_list)/sizeof(sorted_list[0]);
    cout << "Elements of array are: " << endl;
    for (int k = 0; k < len; k++)
    {
        cout << " " << sorted_list[k];
    }
    int value;
    cout << endl << "Enter the element to be searched: " << endl;
    cin >> value;
    int start = 0;
    int end = len - 1;
    int result = binarySearch(sorted_list, start, end, value);
    result == -1 ? cout << "Element is not found!" : cout << "Element found at index: " << result << endl;
    return 0;
}