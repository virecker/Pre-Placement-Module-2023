class Solution {
public:

bool path(TreeNode *root, int sum, int s)
{
    if(root == NULL)
        return false;
    
    sum += root->val;
    if(root->left == NULL and root->right == NULL)
        return sum == s;
    return (path(root->left,sum,s) or path(root->right,sum,s));
}

bool hasPathSum(TreeNode* root, int targetSum) {
    return path(root, 0, targetSum);
}
};