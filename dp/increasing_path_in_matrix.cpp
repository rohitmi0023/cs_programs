int Solution::solve(vector<vector<int> > &A) {
    int n = A.size();
    if (n == 0)
        return 0;
    int m = A[0].size();
    vector<vector<int>> dp(n, vector<int>(m, 0));
    int res = -1;
    dp[0][0] = 1;
}