class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        int start = 0,end = n;
        vector<vector<int>> result;
        queue<vector<int>> q;
        q.push({0});
        while(!q.empty()){
            vector<int> path = q.front();
            q.pop();
            if(path.back() == end - 1){
                result.push_back(path);
            }
            
            for(auto e : graph[path.back()]){
                vector<int> temp = path;
                temp.push_back(e);
                q.push(temp);
            }
        }
        return result;
    }
};