/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int> ans;
    if(A==NULL) return ans;
    stack<TreeNode *> s;
    s.push(A)
    while(!s.empty())
    {
        TreeNode *curr = s.top();        
        if(curr->left != NULL) 
        {
            s.push(curr->left);
            curr->left = NULL;
            continue;
        }
        if(curr->right != NULL)
        {
            s.push(curr->right);
            curr->right = NULL;
            continue;
        }
        ans.push_back(curr->val);
        s.pop();
    }
    return ans;
}
