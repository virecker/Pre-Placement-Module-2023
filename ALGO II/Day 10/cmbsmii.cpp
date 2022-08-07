class Solution {
public:
vector<vector<int>> ans;
void combo(vector<int>&a, int i, int n, int sum, vector<int>&ds)
{
    if(!sum)
    {
        ans.push_back(ds);
        return;
    }
    for(int j=i;j<n;j++)
    {
        if(j>i && a[j]==a[j-1])     continue;
        if(a[j]>sum)    break;
        ds.push_back(a[j]);
        combo(a,j+1,n,sum-a[j],ds);
        ds.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    vector<int>ds;
    sort(candidates.begin(),candidates.end());
    combo(candidates,0,candidates.size(),target,ds);
    return ans;
}
};