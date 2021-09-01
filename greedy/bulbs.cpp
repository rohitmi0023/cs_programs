int Solution::bulbs(vector<int> &A) {
    int res = 0;
    int count = 0;
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        if(count == 0 && A[i] == 1)
            continue;
        if(A[i] == 0 && count == 0)
        {
            count += 1;
            res += 1;
        }
        else if(A[i] == 1 && count != 0)
        {
            count = 0;
            res += 1;
        }
    }
    return res;
}