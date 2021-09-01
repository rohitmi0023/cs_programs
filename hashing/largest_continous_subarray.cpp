vector<int> Solution::lszero(vector<int> &A) {
    unordered_map<int, int> mp;
    vector<int> ans;
    mp[0] = -1;
    int sum = 0, max_len = 0;
    for (int i = 0; i < A.size(); i++)
    {
        sum += A[i]; // Add current element to sum
        // if(A[i] == 0 && max_len == 0)
        //     max_len = 1;
        // if(sum == 0)
        //     max_len = i + 1;
        if(mp.find(sum) == mp.end())//sum is not found in map as key
            mp[sum] = i;
        else //sum is found
        {
            // find len by i - (prev matched key to value)
            int len = i - mp[sum];
            if(max_len > len)//higher length than the previous stored
            {
                ans.clear();
                max_len = i - mp[sum];
                for (int j = mp[sum]; j <= i; j++)
                    ans.push_back(A[j]);
            }
            else
                mp[sum] = i;
        }
    }
    return ans;
}