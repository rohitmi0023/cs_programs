// Input: [2, 7, 11, 15], target=9 Output: index1 = 1, index2 = 2 
vector<int> Solution::twoSum(const vector<int> &A, int B) {
    unordered_map<int, int> mp;
    vector<int> ans;
    for (int i = 0; i < A.size(); i++)
    {
        int k = B - A[i];
        // generally the returned value is to be value
        if (mp.find(A[i]) == mp.end()) // current element's value is not in the map(comparing to sum)
        {
            if (mp.find(k) == mp.end()) // the other part from current is also not found i.e for 2 that will be 7
                mp[k] = i; //adding it to map, value will be the current index and key to be remaining number
        }
        else
        {
            ans.push_back(mp[A[i]] + 1);
            ans.push_back(i + 1);
            return ans;
        }
    }
    return ans;
}