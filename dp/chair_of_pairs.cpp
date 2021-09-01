int Solution::solve(vector<vector<int> > &A) {
    int n = A.size();
    vector<int> dp(n, 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(A[i][0] > A[j][1])
                dp[i] = max(1 + dp[i], dp[i]);
        }
    }
    return *max_element(dp.begin(), dp.end());
}