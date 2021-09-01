int Solution::solve(string A) {
    int n = A.length();
    int lo = 0, hi = n - 1;
    int temp = 0;
    while (lo <= hi)
    {
        if(A[lo] != A[hi])
        {
            hi = n - 1;
            temp += 1;
            lo = temp;
        }
        else
        {
            lo++;
            hi--;
        }
    }
    return temp;
}