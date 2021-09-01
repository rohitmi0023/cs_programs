int func(TreeNode *A, int B, int sum){
    sum += A->val;
    if(A->left == NULL && A->right == NULL && sum == B)
        return 1;
    if(A->left == NULL && A->right == NULL)
        return 0;
    int l = 0, r = 0;
    if(A->left)
        l = func(A->left, B, sum);
    if(A->right)
        r = func(A->right, B, sum);
    return l || r;
}

int Solution::hasPathSum(TreeNode* A, int B) {
    return func(A, B, 0);
}