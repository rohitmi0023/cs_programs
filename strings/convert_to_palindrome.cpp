int Solution::solve(string A) {
    int len = A.length();
    int flag = 0;
    int lo = 0, hi = len - 1;
    while (lo <= hi)
    {
        if(A[lo] != A[hi])
        {
            if(flag)
                return 0;
            flag++;
            if (A[lo] == A[hi - 1])
                hi--;
            else if(A[lo + 1] == A[hi])
                lo++;
            return 0;
        }
    }
    return 1;
}