class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        // if root is null return null
        if(!root) return root;
        
		// temp variable to store the address of TreeNode.
        TreeNode *temp=new TreeNode(); 
       
        if(val < root->val) {
            // search in left subtree
            temp=searchBST(root->left, val);
        } else if(val > root->val) {
            // search in right subtree
            temp=searchBST(root->right, val);
        } else {
            // val == root->val
            temp=root;
        }
        
        return temp;
    }
};