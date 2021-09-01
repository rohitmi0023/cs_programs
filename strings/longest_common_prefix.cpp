string Solution::longestCommonPrefix(vector<string> &A) {
    string s;
    // sorting the strings lexicographically
    sort(A.begin(), A.end());
    int m, n;
    m = A.size() - 1;
    n = min(A[0].length(), A[m].length());
    int i = 0;
    // first and last string will be most dissimilar
    while (i < n && A[0][i] == A[m][i])
    {
        s += A[0][i];
        i++;
    }
    return s;
}