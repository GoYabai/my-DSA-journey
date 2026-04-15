#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int org = image[sr][sc];
        if (org == color) {
            return image; 
        }
        dfs(image, sr, sc, color, org);
        return image;
    }

    void dfs(vector<vector<int>>& image, int sr, int sc, int color, int org)
    {
        int m = image.size();
        int n = image[0].size();
        if (sr < 0 || sr >= m || sc < 0 || sc >= n)
        {
            return;
        }
        if (image[sr][sc] != org)
        {
            return;
        }
        if (image[sr][sc] == org)
        {
            image[sr][sc] = color;
        }
        dfs(image, sr - 1, sc, color, org);
        dfs(image, sr + 1, sc, color, org);
        dfs(image, sr, sc - 1, color, org);
        dfs(image, sr, sc + 1, color, org);
        
    }
};