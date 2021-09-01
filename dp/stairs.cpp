int Solution::climbStairs(int A) {
    vector<int> ans(A + 1, 0);
    ans[0] = 1;
    ans[1] = 1;
    for (int i = 2; i <= A.size(); i++)
    {
        ans[i] = ans[i - 1] + ans[i - 2];
    }
    return ans[A];
}