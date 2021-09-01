bool isVowel(char ch){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return true;
    else
        return false;
}

int Solution::solve(string A){
    int m = 1e7 + 7;
    int vc = 0, cc = 0;
    int n = A.length();
    for (int i = 0; i < n; i++)
    {
        if (isVowel(A[i]))
            vc++;
        else
            cc++;
    }
    long long count = 0;
    for (int i = 0; i < n; i++)
    {
        if(isVowel(A[i]))
        {
            vc--;
            count = (count + vc % m) % m;
        }
    }
    return count % m;
}