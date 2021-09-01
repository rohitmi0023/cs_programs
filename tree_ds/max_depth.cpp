int Solution::maxDepth(TreeNode* A) {
    if(A != NULL)
    {
        if(A->left == NULL && A->right == NULL)
            return 1;
        else
        {
            int left = maxDepth(A->left);
            int right = maxDepth(A->right);
            return max(left, right) + 1;
        }
    }
    return 0;
}