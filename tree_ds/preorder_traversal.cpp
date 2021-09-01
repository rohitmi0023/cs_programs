/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// iterative approach
vector<int> Solution::preorderTraversal(TreeNode *A){
    vector<int> ans;
    stack<TreeNode *> s;
    TreeNode *curr = A;
    s.push(A);
    while (!s.empty())
    {
        curr = s.top();
        ans.push_back(curr->val);
        s.pop();
        if(curr->right != NULL)
            s.push(curr->right);
        if(curr->left != NULL)
            s.push(curr->left);
    }
    return ans;
}
