int Solution::solve(vector<int> &a) {
    int n = a.size();
    unordered_map<int, int> mp;
    int sum = 0, max_len = 0;
    for (int i = 0; i < n; i++){
        if(a[i] == 0)
            sum -= 1;
        else
            sum += 1;
        if(sum == 1)
            max_len = i + 1;
        else if(mp.find(sum) == mp.end())
            mp[sum] = i;
        if(mp.find(sum - 1) != mp.end())
         max_len = max(max_len, i - mp[sum - 1]);
    }
    return max_len;
}