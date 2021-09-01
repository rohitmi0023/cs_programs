vector<int> Solution::solve(vector<int> &A, int B){
    if(A.size() <= 1)
        return A;
    int n = A.size();
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[A[i]] = i;
    for (int i = 0; i < n && B > 0; i++)
    {
        if(A[i] != n - i)
        {
            int prev = A[i];
            swap(A[i], A[mp[n - i]]);
            A[i] = mp[n - i];
            mp[n - i] = i;
            B--;
        }
    }
    return A;
}