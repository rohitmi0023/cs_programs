int Solution::solve(TreeNode* root, int B) {
    vector<int> ans;
    queue<TreeNode *> q;
    if (A == NULL)
        return 0;
    if(A->val == B)
    {
        ans.push_back(A->val);
        if(A->left != NULL)
            q.push(A->left);
        if(A->right != NULL)
            q.push(A->right);
        return 1;
    }
    int left = solve(A->left, B);
    if(left == 1)
    {
        int qSize = q.size();
        for (int i = 0; i < qSize(); i++)
        {
            TreeNode *curr = q.front();
            q.pop();
            if(curr->left != NULL)
                q.push(curr->left);
            if(curr->right != NULL)
                q.push(curr->right);
        }
        if(A->right != NULL)
            q.push(A->right);
        ans.push_back(A->val); 
    }
    int right = solve(A->right, B);
    if(right == 1)
    {
        int qSize = q.size();
        for (int i = 0; i < qSize(); i++)
        {
            TreeNode *curr = q.front();
            q.pop();
            if(curr->left != NULL)
                q.push(curr->left);
            if(curr->right != NULL)
                q.push(curr->right);
        }
        if(A->left != NULL)
            q.push(A->left);
        ans.push_back(A->val);
        return 1;
    }
    while(!q.empty())
    {   
        int qSize = q.size();
        for (int i = 0; i < qSize(); i++)
        {
            TreeNode *curr = q.front();
            ans.push_back(curr->val);
            if(curr->left != NULL)
                q.push(curr->left);
            if(curr->right != NULL)
                q.push(curr->right);
        }
    }
}