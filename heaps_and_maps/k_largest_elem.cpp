vector<int> Solution::solve(vector<int> &A, int B) {
    sort(A.begin(), A.end(), greater<int>());
    A.erase(A.begin() + B, A.end());
    return A;
}