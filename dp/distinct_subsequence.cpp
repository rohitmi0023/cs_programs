int Solution::numDistinct(string S, string T) {
    int n = S.length();
    int m = T.length();
    if (m > n) return 0;
    // creating a vector of size (m + 1) with all values as vector<int>() -> creating a vector of size
    // n + 1 with all values as 0
    // [[0, ....n], ... m + 1 times]
    vector<vector<int>> path(m + 1, vector<int>(n + 1, 0));
    for (int k = 0; k <= n; k++)
        path[0][k] = 1; // 1st element of array is [1, 1, 1... n+1 times]
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if(S[i - 1] == T[j - 1])
                path[i][j] = path[i][j - 1] + path[i - 1][j - 1];
            else
                path[i][j] = path[i][j - 1];
        }
    }
    return path[m][n];
}