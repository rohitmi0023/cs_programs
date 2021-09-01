string Solution::multiply(string s, string t){
    int m = t.size();
    int n = s.size();
    if (m == 0 || n == 0)
    {
        return "0";
    }
    vector<int> result(n + m, 0);
    int ind1 = 0, ind2 = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int carry = 0;
        int n1 = s[i] - '0';
        ind2 = 0;
        for (int j = m - 1; j >= 0; j--)
        {
            int n2 = t[j] - '0';
            int sum = (n1 * n2) + result[ind1 + ind2] + carry;
        }
    }
}