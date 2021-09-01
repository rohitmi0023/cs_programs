bool comp(vector<int> &A, vector<int> &B){
    return A[1] < B[1];
}

int Solution::solve(vector<vector<int>> &a) {
    if(a.size() == 0)
        return 0;
    sort(a.begin(), a.end(), comp);
    int leftMost = a[0][1];
    int res = 1;
    for (int i = 1; i < a.size(); i++)
    {
        if(leftMost < a[i][0])
        {
            leftMost = a[i][0];
            res += 1;
        }
    }
    return res;
}