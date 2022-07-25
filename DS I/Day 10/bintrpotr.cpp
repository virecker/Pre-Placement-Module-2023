class Solution {
    private:
    vector<int>q;
public:
    vector<int> postorderTraversal(TreeNode* root) {
 if(root==NULL)
     return q;
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        q.push_back(root->val);
        return q;
        
    }
};