string Solution::solve(string A){
    queue<char> q;
    string ans = '';
    unordered_map<char, int> m;
    for (int i = 0; i < A.length(); i++)
    {
        q.push(A[i]);
        m[A[i]]++;
        while (!q.empty())
        {
            if(m[q.front()] > 1)
            {
                q.pop();
            }
            else
            {
                res.push_back(q.front());
                break;
            }
        }
        
    }
    if(q.isEmpty())
        res.push_back('#');
    return ans;
}