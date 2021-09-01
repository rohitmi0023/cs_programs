void DFS(TreeNode *A, vector<int> val, vector<vector<int>> &final){
    if(!A)
        return;
    val.push_back(A->val);
    if(A->left != NULL && A->right != NULL)
        final.push_back(val);
    DFS(A->left, val, final);
    DFS(A->right, val, final);
}

vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<vector<int>> final;
    if(!A)
        return final;
    vector<int> val;
    DFS(A, val, final);
    vector<vector<int>> ans;
    for(auto x:final){
        int sum = 0;
        for(auto y : x)
            sum += y;
        if(sum == B)
            ans.push_back(x);
    }
    return ans;
}
