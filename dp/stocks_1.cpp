int Solution::maxProfit(const vector<int> &A) {
    int minVal = INT_MAX;
    int maxProfit = 0;
    for(auto val : A)
    {
        if(val < minVal)
            minVal = val;
        else
            maxProfit = max(maxProfit, val - minVal);
    }
    return maxProfit;
}