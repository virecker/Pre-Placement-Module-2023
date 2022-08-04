class Solution {
public:
    int findCircleNum(vector<vector<int>>& g) {
        
        int n = g.size();
        
        if(n==0) return 0;
        
        vector<bool> vis(n,false);
        int count=0;
        for( int i=0;i<n;i++){
            if( !vis[i]){
                count++;
                dfs(g,vis,i);
            }
        }
        
        return count;
    }
    
void dfs(vector<vector<int>>& g, vector<bool>& vis, int node)
{
	vis[node]=true;
	for(int j=0;j<g.size();j++)
		if(g[node][j]==1 && !vis[j])
			dfs(g,vis,j);
}
};