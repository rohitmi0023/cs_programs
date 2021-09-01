vector<int> Solution::searchRange(const vector<int> &A, int B) {
    vector<int> res(2, -1);
    int n = A.size();
    int lo = 0, hi = n - 1;
    while(lo <= hi)
    {
        int mid = lo + (hi - lo)/2;
        if(A[mid] > B)
            hi = mid - 1;
        else if(A[mid] < B)
            lo = mid + 1;
        else // A[mid] == B
        {
            if (A[mid] > A[mid - 1] || mid == 0)
            {
                res[0] = mid;
                break;
            }
            else
            {
                hi = mid - 1;
            }
        }
    }
    lo = 0, hi = n - 1;
    while(lo <= hi)
    {
        int mid = lo + (hi - lo)/2;
        if(A[mid] > B)
            hi = mid - 1;
        else if(A[mid] < B)
            lo = mid + 1;
        else // A[mid] == B
        {
            if (A[mid] < A[mid + 1] || mid == n - 1)
            {
                res[1] = mid;
                break;
            }
            else
            {
                lo = mid + 1;
            }
        }
    }
    return res;
}