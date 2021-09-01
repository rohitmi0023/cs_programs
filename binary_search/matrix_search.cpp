int Solution::searchMatrix(vector<vector<int>> &A, int B) {
    int n = A.size();
    int m = A[0].size();
    int lo = 0, hi = m - 1, i = 0;
    while (lo <= hi && i < n)
    {
        if(A[i][m - 1] < B)
        {
            i++;
            continue;
        }
        int mid = (lo + hi) / 2;
        if(A[i][mid] == B)
            return 1;
        else if (A[i][mid] < B)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return 0;
    // int m = A[0].size() - 1;
    // int hi = A.size() - 1;
    // int lo = 0;
    // long long int mid;
    // while(lo <= hi)
    // {
    //     mid = lo + (hi - lo) / 2;
    //     if (A[mid][m] > B)
    //     {
    //         if(A[mid][0] < B)
    //             break;
    //         hi = mid - 1;
    //     }
    //     else if(A[mid][m] < B)
    //     {
    //         if(A[mid][m] > B)
    //             break;
    //         lo = mid + 1;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
    // long long int mid2;
    // lo = 0;
    // hi = A[0].size();
    // int row = mid;
    // while (lo <= hi)
    // {
    //     mid2 = lo + (hi - lo) / 2;
    //     if (A[row][mid2] > B)
    //     {
    //         hi = mid2 - 1;
    //     }
    //     else if(A[row][mid2] < B)
    //     {
    //         lo = mid2 + 1;
    //     }
    //     else
    //         return 1;
    // }
    // return 0;
}