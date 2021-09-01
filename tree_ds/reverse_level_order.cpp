/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

vector<int> Solution::solve(TreeNode* A) {
    int x = 0;
    vector<int> ans;
    vector<int> subv;
    queue<pair<TreeNode *, int>> q;
    q.push({A, 0});
    TreeNode *curr;
    while(!q.empty())
    {
        int level = q.front().second;
        curr = q.front().first;
        q.pop();
        if(level > x)
        {
            x++;
            ans.insert(ans.begin(), subv.begin(), subv.end());
            subv.clear();
        }
        if (curr->left)
        {
            q.push({curr->left, level + 1});
        }
        if(curr->right != NULL)
        {
            q.push({curr->right, level + 1});
        }
        if(curr == x)
            subv.push_back(curr->val);
    }
    ans.insert(ans.begin(), subv.begin(), subv.end());
    return ans;
}