/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* root) {
    vector<int> ans;
    queue<pair<TreeNode *, int>> q;
    q.push({root, 0});
    pair<TreeNode *, int> currPair;
    while(!q.empty())
    {
        int startLevel = q.front().second;
        while(startLevel == q.front().second && !q.empty())
        {
            currPair = q.front();
            if(currPair.first->left != NULL)
                q.push({currPair.first->left, startLevel + 1});
            if(currPair.first->right != NULL)
                q.push({currPair.first->right, startLevel + 1});
            q.pop();
        }
        ans.push_back(currPair.first->val);
    }
    return ans;
}
