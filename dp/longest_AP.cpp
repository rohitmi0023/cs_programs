int Solution::solve(const vector<int> &A) {
    int n = A.size();
    int ans = 2;
    vector<unordered_map<int, int>> dp(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int diff = A[i] - A[j];
            if(mp[i].find(diff) != mp[i].end())
            {
                mp[j][diff] = mp[i][diff] + 1;
            }
            else
            {
                mp[j][diff] = 2;
            }
            ans = max(ans, mp[j][diff]);
        }
    }
    return ans;
}

