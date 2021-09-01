int Solution::solve(vector<vector<int> > &A) {
    int n = A.size();
    vector<int> prev = A[0];
    vector<int> next(3, 0);
    for (int i = 1; i < n; i++)
    {
        next[0] = min(prev[1], prev[2]) + A[i][0];
        next[1] = min(prev[0], prev[2]) + A[i][1];
        next[2] = min(prev[0], prev[1]) + A[i][2];
        prev = next;
    }
    return *min_element(next.begin(), end(next));
}