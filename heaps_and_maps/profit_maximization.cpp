int Solution::solve(vector<int> &A, int B) {
    priority_queue<int> pq;
    for (auto val : A)
        pq.push(val);
    int profit = 0;
    while (B)
    {
        int value = pq.top();
        profit += value;
        pq.pop();
        pq.push(value-1);
        B--;
    }
    return profit;
}
 