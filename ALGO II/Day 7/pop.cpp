class Solution {
public:
    Node* connect(Node* root) {
queue<Node*> q;
vector<Node*> v;
q.push(root);
if(!root)
{
return root;
}
while(!q.empty())
{

        int n=q.size();
        for(int i=0;i<n;i++)
        {
            Node* cur=q.front();
            q.pop();
            v.push_back(cur);
            if(cur->left)
                q.push(cur->left);
            if(cur->right)
                q.push(cur->right);
            
        }
        v.push_back(NULL);
    }
    for(auto i=0;i<v.size()-1;i++)
    {
        if(v[i]!=NULL)
        {
            v[i]->next=v[i+1];
        }
    }
    return v[0];
}
};