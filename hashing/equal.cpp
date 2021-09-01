vector<int> Solution::equal(vector<int> &A) {
    int i = -1, j = -1;
    unordered_map<int, pair<int, int>> m;
    vector<vector<int>> ans;
    for (int i = 0; i < A.size() - 1; i++)
    {
        for (int j = i + 1; j < A.size(); j++)
        {
            if(m.find(A[i] + A[j]) == m.end())
                m[A[i] + A[j]] = {i, j};
            else
            {
                int x = m[A[i] + A[j]].first;
                int y = m[A[i] + A[j]].second;
                if(x != i && x != j && y != i && y != j)
                {
                    vector<int> v;
                    v.push_back(x);
                    v.push_back(y);
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans[0];
}