// reverse horizontally
unsigned int Solution::reverse(unsigned int a) {
    int b = 0;
    for (int i = 0; i < 32; i++)
    {
        b = b << 1;
        b = b | a & 1;
        a = a >> 1;
    }
    return b;

    // without using shift operators
    unsigned int ans = 0;
    int i = 31;
    while (A > 0)
    {
        int r = A % 2;
        if(!r)
            ans += pow(2, 1);
        
    }

    // using string functions
    // bitset<32> b(A);
    // string s = b.to_string();
    // std::reverse(s.begin(), s.end());
    // bitset<32> b1(s);
    // return b1.to_ulong();
}