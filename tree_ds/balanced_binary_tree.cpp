/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int depth(TreeNode* root){
    // calculating the depth of the tree
    if(!root)
        return 0;
    return max(depth(root->left), depth(root->right)) + 1;
} 

int Solution::isBalanced(TreeNode* A) {   
    if(!A)
        return 1;
    int left = depth(A->left); //calculating the depth from root's left child
    int right = depth(A->right); //calculating the depth from root's right child
    return abs(left - right) <= 1 && isBalanced(A->left) && isBalanced(A->right); //going further into nodes
}



















int depth(A, count){
    if(!A)
        return 0;
    return max(depth(A->left), depth(A->right)) + 1;
}

int Solution::isBalanced(TreeNode* A) {
    if (A == NULL || A->left == NULL || A->left->left == NULL)
        return 1;
    int lcount = 0, rcount = 0;
    int lcount = depth(A->left);
    int rcount = depth(A->right);
    return abs(lcount - rcount) <= 1 && isBalanced(A->left) && isBalanced(A->right);
}