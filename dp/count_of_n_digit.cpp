int rec(vector<vector<int>> &dp, int id, int sum){
    if(sum < 0)
        return 0;
    if(id == 0 && sum == 0)
        return 1;
    if(id == 0)
        return 0;
    if(dp[id][sum] != -1)
        return dp[id][sum];
    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        ans += rec(dp, id - 1, sum - i);
        ans %= 1000000007;
    }
    return dp[id][sum] = ans;
}

int Solution::solve(int A, int B) {
    int ans = 0;
    vector<vector<int>> dp(A + 1);
    for (int i = 0; i < A + 1; i++)
    {
        dp[i].resize(B + 1);
        for (int j = 0; j < B + 1; j++)
            dp[i][j] = -1;
    }
    for (int i = 1; i < 10; i++)
    {
        ans = (ans%1000000007 + rec(dp, A - 1, B - i)%1000000007)%1000000007;
    }
    return ans;
}
// N digit numbers with digit sum S
int rec(vector<vector<int>> &dp, int id, int sum){
    if(sum < 0)
        return -1;
    if(sum == 0 && id == 0)
        return 0;
    if(id == 0)
        return 0;
    if(dp[id][sum] != -1)
        return dp[id][sum];
    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        ans += rec(dp, id - 1, sum - i);
        ans %= 1000000007;
    }
    return dp[id][sum] = sum;
}

int Solution::solve(int A, int B) {
    int ans = 0;
    vector<vector<int>> dp(A + 1);
    dp.resize(A + 1);
    for (int i = 0; i < A + 1; i++)
    {
        dp[i].resize(B + 1);
        for (int j = 0; j < B + 1; B++)
            dp[i][j] = -1;
    }
    for (int i = 1; i < 10; i++)
    {
        ans += rec(dp, A - 1, B - i);
        ans %= 1000000007;
    }
}