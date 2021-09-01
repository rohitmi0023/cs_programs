// Recursive
inorder(TreeNode *A){
    if(node == NULL)
        return;
    inorder(A->left);
    return A->val;
    inorder(A->right);
}

// iterative (using stack)
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> ans;
    stack<TreeNode *> s;
    TreeNode *curr = A;
    while(curr != NULL || !s.empty())
    {
        while(curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        ans.push_back(curr->val);
        curr = curr->right;
    }
    return ans;
}