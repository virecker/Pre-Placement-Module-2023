class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> ans(numRows) ; 
        
        for(int i=1;i<=numRows;i++)
            ans[i-1].resize(i);
        
        for(int i=0;i<numRows;i++)
        {
            for(int j=0; j<=i;j++)
            {
                if(j==0 || i==j)
                    ans[i][j]=1;
                
                else
                    ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
            }
        }
        return ans;
    }
};