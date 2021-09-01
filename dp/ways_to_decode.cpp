const int N = 1000000007;
int Solution::numDecodings(string A) {
    int dp[A.size()];
    if(A[0] != '0')
        dp[0] = 1;
    else
        dp[0] = 0;
    for (int i = 1; i < A.size(); i++){
        if(A[i] == '0' && A[i-1] == '0')
            dp[i] = 0;
        else if(A[i] == '0' && A[i - 1] != '0')
        {
            string t = A.substr(i - 1, 2);
            if(stoi(t) <= 20 && i >= 2)
                dp[i] += dp[i - 2] % N;
            if(stoi(t) <= 20 && i < 2)
                dp[i] = 1;
        }
        else if (A[i] != '0' && A[i - 1] == '0')
            dp[i] += dp[i - 1] % N;
        else
        {
            dp[i] += dp[i - 1] % N;
            string t = A.substr(i - 1, 2);
            if(stoi(t) <= 26 && i >= 2)
                dp[i] += dp[i-2]%N;
            if(stoi(t) <= 26 && i < 2)
                dp[i]= 2;
        }
    }
    return dp[A.size()-1]%N;
}