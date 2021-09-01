/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void helper(TreeNode* root, int depth, int parent, unodered_map<int, pair<int, int>> &m){
    if(!root)
        return;
    m[root->val] = {depth, parent};
    helper(root->left, depth + 1, root->val, m);
    helper(root->right, depth + 1, root->val, m);
}

vector<int> Solution::solve(TreeNode* A, int B) {
    unordered_map<int, pair<int, int>> m;
    helper(A, 0, -1, m);
}
