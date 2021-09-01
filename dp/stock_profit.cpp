int Solution::solve(vector<int> &prices, int K) {
    int n = prices.size();
    if(n <= 1 || K == 0)
        return 0;
    if(K >= n/2)
    {
        int profit = 0;
        for (int i = 1; i < n; i++)
            profit += max(0, prices[i] - prices[i - 1]);
        return profit;
    }
    vector<int> buy(K, -prices[0]);
    vector<int> sell(K, 0);
    for (int i = 1; i < n; i++)
    {
        buy[0] = max(buy[0], -prices[i]);
        sell[0] = max(sell[0], buy[0] + prices[i]);
        for (int k = 1; k < K; k++)
        {
            
        }
        
    }
}