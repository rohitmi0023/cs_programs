TreeNode* buildutil(const vector<int> &A, int start, int end){
    if(start > end)
        return NULL;
    int mid = start + (end - start) / 2;
    TreeNode *A = new TreeNode(A[mid]);
    if (start == end)
        return A;
    else
    {
        A->left = buildutil(A, start, mid - 1);
        A->right = buildutil(A, mid + 1, end);
    }
    return A;
}

TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    return buildutil(A, 0, A.size() - 1);
}
