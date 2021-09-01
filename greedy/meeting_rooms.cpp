int Solution::solve(vector<vector<int> > &A) {
    map<int, int> timings;
    int n = A.size();
    if(n == 0)
        return 0;
    timings[A[0][0]]++;
    timings[A[0][1]]--;
    int ans = 1;
    for (int i = 0; i < n; i++){
        timings[A[i][0]]++;
        timings[A[i][1]]--;
    }
    int last = 0;
    for (auto it = timings.begin(); it != timings.end(); i++){
        it->second = it->second + last;
        last = it->second;
        ans = max(ans, last);
    }
    return ans;
}