int Solution::solve(vector<int> &values, vector<int> &weights, int C) {
    int n = values.size();
    if(n == 0 || C == 0)
        return 0;
    int dp[n + 1][C + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= C; j++)
        {
            if(weights[i - 1] > j)
            {

            }
            else
            {
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-weights[i - 1]] + values[i - 1])
            }
        }
    }
}