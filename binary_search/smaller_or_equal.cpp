int Solution::solve(vector<int> &a, int k) {
    int low = 0;
    int high = A.size() - 1;
    int ans = 0;
    while(low <= high)
    {
        int mid = low + (high - low) / 2;
        if(a[mid] <= k)
        {
            ans = mid + 1;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return mid;
}
