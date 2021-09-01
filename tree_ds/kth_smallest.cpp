/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void inOrder(TreeNode* A, int B, vector<int> &ans){
    if(A == NULL)
        return;
    inOrder(A->left, B, ans);
    if(ans.size() < B)
        ans.push_back(A->val);
    if(ans.size() == B)
        return;
    inOrder(A->right, B, ans);
}

int Solution::kthsmallest(TreeNode* A, int B) {
    vector<int> ans;
    inOrder(A, B, ans);
    return ans.back();
}