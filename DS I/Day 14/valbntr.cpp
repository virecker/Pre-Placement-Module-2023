class Solution {
public:
bool ans = true;
void Traversal(TreeNode *base, TreeNode *root)
{
if(base)
{
Traversal(base->left, root);
if(!validate(root, base))
ans = false;
Traversal(base->right,root);
}
}

bool validate(TreeNode *base, TreeNode *required)
{
if(base == NULL)
return false;
else if(base == required)
return true;
if(validate(base->left, required) && base->val > required->val)
return true;
else if(validate(base->right, required) && base->val < required->val)
return true;
else
return false;
}

bool isValidBST(TreeNode* root) {
Traversal(root, root);
return ans;
}
};