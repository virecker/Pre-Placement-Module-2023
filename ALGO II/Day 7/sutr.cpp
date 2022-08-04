class Solution {
public:
    bool issame(TreeNode *t1,TreeNode *t2){
        if(!t1 && !t2){
            return true;
        }
        if(!t1){
            return false;
        }
        if(!t2){
            return false;
        }
          if((t1->val!=t2->val)){
              return false;
          }
        return issame(t1->left,t2->left) && issame(t1->right,t2->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root && !subRoot){
            return true;
        }
        if(!root){
            return false;
        }
        if(!subRoot){
            return true;
        }
        
        return issame(root,subRoot) || isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};