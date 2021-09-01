int Solution::solve(vector<int> &A, int B){
    // Ex. A = 4, 42, 40, 26, 46], B = 20
    int hi = 0, n = A.size(), ans; // n = 5
    for (int i = 0; i < n; i++)
    {
        hi = max(A[i], hi);
    }
    // now, hi = 46 i.e. highest tree length is 46
    int lo = 0; //i.e. lowest length can be 0
    while (lo <= hi) // till we find the optimum wood length
    {
        long long int mid = lo + (hi - lo) / 2; // finding median length of wood
        long long int sum = 0;
        for (int i = 0; i < n; i++) //for calculating the total wood length obtain for given mid value
        {
            if (A[i] > mid)
            {
                sum =  sum + (A[i] - mid);
            }
        }
        if (sum > B)
        {
            ans = mid;
            lo = mid + 1;
        }
        else if (sum < B)
        {
            hi = mid - 1;
        }
        else
            return mid;
    }
    return ans;
}