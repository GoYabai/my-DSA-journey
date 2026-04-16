#include <vector>
using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 1)
                {
                    return dfs(grid, i, j);
                }
            }
        }
    }

    int dfs(vector<vector<int>>& grid, int i, int j)
    {
        int m = grid.size();
        int n = grid[0].size();
        if (i < 0 || i >= m || j < 0 || j >= n)
        {
            return 1;
        }
        if (grid[i][j] == 0)
        {
            return 1;
        }
        if (grid[i][j] == -1)
        {
            return 0;
        }
        grid[i][j] = -1;
        return dfs(grid, i - 1, j) +
               dfs(grid, i + 1, j) +
               dfs(grid, i, j - 1) +
               dfs(grid, i, j + 1);
    }
};