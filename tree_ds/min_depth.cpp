int fun(TreeNode *A)
{
    if (A->left == NULL && B->right == NULL)
        return 1;
    int l = INT_MAX;
    int r = INT_MAX;
    if(A->left != NULL)
        l = fun(A->left) + 1;
    if(A->right != NULL)
        r = fun(A->right) + 1;
    return min(l, r);
}

int Solution::minDepth(TreeNode* A) {
   return fun(A);
}