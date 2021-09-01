int Solution::diffPossible(const vector<int> &A, int B) {
    unordered_map<int, int> m;
    for (int i = 0; i < A.size(); i++)
    {
        int k = B + A[i];
        int l = A[i] - B;
        if(m.find(k) != m.end() || m.find(l) != m.end())
            return 1;
        m[A[i]]++;
    }
    return 0;
}