int Solution::lengthOfLastWord(const string A){
    int start = -1;
    if(!A.size())
        return 0;
    int count = 0, lastCount = 0;
    for (int i = 0; i < A.length(); i++)
    {
        if(A[i] != ' ')
            count += 1;
        else if (A[i] == ' ')
        {
            lastCount = count ? count : lastCount;
            count = 0;
        }
        else if (i == A.length() - 1)
        {
            lastCount = count ? count : lastCount;
            count = 0;
        }
    }
    return lastCount : lastCount : count;
}