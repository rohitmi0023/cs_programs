int Solution::lis(const vector<int> &A) {
    int n = A.size();
    if (A.size() == 0) return 0;
    int dp[A.size() + 1];
    dp[0] = 1;
    for (int i = 1; i < n; i++)
    {
        dp[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if(A[j] < A[i] && dp[i] < dp[j] + 1)
                dp[i] = dp[j] + 1;
        }
    }
    return *max_element(dp, dp + n);
}