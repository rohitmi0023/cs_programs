int Solution::solve(vector<int> &A){
    map<int, int> mp;
    for (int i = 0; i < A.size(); i++)
        mp[A[i]]++;
    for (int i = 0; i < A.size(); i++)
    {
        if(mp[A[i]] > 1)
            return mp[A[i]];
    }
    return -1;
}