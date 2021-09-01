vector<int> Solution:: insertionSort(vector<int> &A){
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j;
        j = i - 1;
        while (j >= 0 && key < arr[j])
        {
            // shifting the compared card to +1, decreasing the index, not placing your card
            arr[j+1] = arr[j];
            j = j - 1;
        }
        // placing the card as the compared card is lesser than our current card
        arr[j+1] = key;
    }
}