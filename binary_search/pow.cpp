int Solution::pow(int x, int n, int d){
    if(n == 0)
        return 1 % d;
    long long ans = 1, base = x;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            ans = (base * ans) % d;
            n -= 1;
        }
        else if (n % 2 == 0)
        {
            base = (base * base) % d;
            n /= 2;
        }
    }
    if(ans < 0)
    {
        ans = (ans + d) % d;
    }
    return ans;
}