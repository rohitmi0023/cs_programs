#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int p, int q, int r)
{
	int i, j, k;
	int l1 = q - p + 1;
	int l2 = r - q;
	int L[l1], M[l2];
	for (i = 0; i < l1; i++)
	{
		L[i] = arr[p + i];
	}
	for (j = 0; j < l2; j++)
	{
		M[j] = arr[q + 1 + j];
	}
	for (int i = 0; i < l1; i++)
	{
		cout << L[i] << " " ;
	}
	cout  << endl;
	for (int i = 0; i < l2; i++)
	{
		cout << M[i] << " " ;
	}
	i = 0; 
	j = 0;
	k = p;
	while( i < l1 && j < l2)
	{
		if(L[i] <= M[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = M[j];
			j++;
		}
		k++;
	}
	while (i < l1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < l2)
	{
		arr[k] = M[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int p, int r)
{
	if(p < r){
		int q;
		q = p + (r - p)/2;
		mergeSort(arr, p, q);
		mergeSort(arr, q+1, r);
		merge(arr, p, q, r);
	}
}

int main(){
	int arr[] = {32, 12, 45, 4, 22};
	int arr_size = sizeof(arr)/sizeof(arr[0]);
	mergeSort(arr, 0, arr_size - 1);
	for (int i = 0; i < arr_size; i++)
	{
		cout << arr[i] << " " ;
	}
	return 0;
}