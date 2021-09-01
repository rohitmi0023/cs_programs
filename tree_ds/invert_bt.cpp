TreeNode* Solution::invertTree(TreeNode* A) {
    if(A)
    {
        TreeNode *curr = A->left;
        A->left = invertTree(A->right);
        A->right = invertTree(curr);
    }
    return A;
}