class Solution {
public:
    bool check(TreeNode *leftSide, TreeNode *rightSide)
    {
        if(leftSide == NULL && rightSide == NULL)
            return true;
        
        if((leftSide == NULL && rightSide != NULL) || (left != NULL && rightSide == NULL))
            return false;
        
        if(leftSide->val != rightSide->val)
            return false;
        
        if(check(leftSide->left, rightSide->right) == false)
            return false;
        
        if(check(leftSide->right, rightSide->left) == false)
            return false;
        
        return true;
    } 
    
    bool isSymmetric(TreeNode* root) {
	    return check(root->left, root->right);
    }
};