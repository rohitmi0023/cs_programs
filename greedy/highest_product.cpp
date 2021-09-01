int Solution::maxp3(vector<int> &A) {
    if(A.size() < 3)
    {
        int ans = 1;
        while (!A.empty())
        {
            ans *= A.back();
            A.pop_back();
        }
        return ans;
    }
    int mx1 = mx2 = mx3 = INT_MIN;
    int mn1 = mn2 = INT_MAX;
    for(auto val : A)
    {
        if(val > mx1)
        {
            mx3 = mx2;
            mx2 = mx1;
            mx1 = i;
        }
        else if(val > mx2)
        {
            mx3 = mx2;
            mx2 = val;
        }
        else if(val > mx3)
            mx3 = val;
        if(val < mn1)
        {
            mn2 = mn1;
            mn1 = val;
        }
        else if(val < mn2)
            mn2 = val;
    }
    return max(mx1 * mx2 * mx3, mx1 * mn1 * mn2);
}