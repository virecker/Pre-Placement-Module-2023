class Solution {
public:
    int arr[10000];
    int j=-1;
    TreeNode* iotbst(TreeNode* root)
    {
        if(root==NULL)
            return NULL;
        iotbst(root->left);
        j++;
        arr[j] = root->val;
        iotbst(root->right);
        return NULL;
    }
    bool binarysearch(int begin, int end, int data)
    {
        if(end>=begin){
            int mid = begin + (end - begin) / 2;
            if(arr[mid] == data)
                return true;
            if(arr[mid]>data)
                return binarysearch(begin, mid-1, data);
            return binarysearch(mid+1, end, data);
        } 
        else
            return false;
    }
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL)
            return false;
        iotbst(root);
        for(int i=0; i<=j; i++)
        {
            if(binarysearch(i+1, j, k-arr[i])==true)
                return true;
        }
        return false;
    }
};