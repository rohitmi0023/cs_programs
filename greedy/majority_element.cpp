int Solution::solve(vector<int> &A){
    int n = A.size();
    map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[A[i]]++;
    for (auto val : mp){
        if(val.second > floor(n/2))
            return mp.first;
    }
    return -1;
}