string Solution::solve(string A, int B){
    string ret = "";
    int i = 0;
    while (i < A.size())
    {
        int j = i;
        string cur = "";
        while (j < A.size() && A[i] == A[j])
        {
            curr.push_back(A[j]);
            j++;
        }
        if(j - i != B)
        {
            ret.push_back(curr);
        }
        i = j;
    }
    return ret;
}