class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        queue<pair<int, int>> q;
        int numFresh = 0;
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 2) {
                    q.push({i, j});
                } else if (grid[i][j] == 1) {
                    numFresh++;
                }
            }
        }
        
        if (numFresh == 0) return 0;
        
        int numMinutes = -1;
        vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        
        while (!q.empty()) {
            int qSize = q.size();
            numMinutes++;
            
            for (int k = 0; k < qSize; ++k) {
                auto [i, j] = q.front();
                q.pop();
                
                for (const auto& dir : directions) {
                    int r = i + dir[0];
                    int c = j + dir[1];
                    
                    if (r >= 0 && r < m && c >= 0 && c < n && grid[r][c] == 1) {
                        grid[r][c] = 2;
                        numFresh--;
                        q.push({r, c});
                    }
                }
            }
        }
        
        return numFresh == 0 ? numMinutes : -1;
    }
};