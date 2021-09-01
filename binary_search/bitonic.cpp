int Solution::solve(vector<int> &A, int B) {
    int pivot;
    for(int i = 0; i < A.size(); i++)
    {
        if(A[i] < A[i+1])
            pivot = i + 1; 
    }
    int low = 0;
    int high = pivot;
    while(low <= high)
    {
        int mid = low + (high - low)/2; 
        if(B == A[mid])
        {
            return mid;
        }
        else if(B < A[mid])
        {
            high = mid - 1;
        }
        else 
            low = mid + 1;
    }
    low = pivot + 1;
    high = A.size() -1;
    while(low <= high)
    {
        int mid = low + (high - low)/2; 
        if(B == A[mid])
        {
            return mid;
        }
        else if(B < A[mid])
        {
            low = mid + 1;
        }
        else 
            high = mid - 1;
    }
    return -1; 
}
