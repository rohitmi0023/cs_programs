int Solution::findMedian(vector<vector<int> > &A) {
    int n = A.size(), m = A[0].size();
    int min = INT_MIN, max = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        min = min(A[i][0], min);
    }
    for (int i = 0; i < n; i++)
    {
        max = max(A[i][m - 1], max);
    }
    int ind = ((n * m) + 1) / 2;
    while (min < max)
    {
        int mid = min + (max - min) / 2;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            count = count + upper_bound(A[i].begin(), A[i].end(), mid) - A[i].begin();
        }
        if(count < ind)
            min = mid + 1;
        else
            max = mid;
    }
    return mid;
}