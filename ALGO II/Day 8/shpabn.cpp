class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if (grid[0][0] == 0) {
            int n = grid.size(); 
            queue<pair<int, int>> q; q.emplace(0, 0); 
            grid[0][0] = 1; 
            for (int ans = 1; q.size(); ++ans) 
                for (int sz = q.size(); sz; --sz) {
                    auto [i, j] = q.front(); q.pop(); 
                    if (i == n-1 && j == n-1) return ans; 
                    for (int ii = i-1; ii <= i+1; ++ii) 
                        for (int jj = j-1; jj <= j+1; ++jj) 
                            if (0 <= ii && ii < n && 0 <= jj && jj < n && grid[ii][jj] == 0) {
                                q.emplace(ii, jj); 
                                grid[ii][jj] = 1; 
                            }
                }
        }
        return -1; 
    }
};