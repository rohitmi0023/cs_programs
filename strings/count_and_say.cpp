string Solution::countandsay(int A){
    string s = "1";
    int t = 1, count = 1;
    string s1 = "";
    while (t < A)
    {
        for (int i = 0; i < s.length(); i++)
        {
            char temp = s[i];
            if(i + 1 < s.length() && s[i+1] == temp)
            {
                count += 1;
                continue;
            }
            s1.push_back(to_string(count));
            s1.push_back(temp);
            count = 1;
        }
        s = s1;
        s1 = "";
        t++;
    }
    return s;
}