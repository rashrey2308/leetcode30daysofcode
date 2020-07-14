/*
You are given a map in form of a two-dimensional integer grid where 1 represents land and 0 represents water.
Grid cells are connected horizontally/vertically (not diagonally). The grid is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells).
The island doesn't have "lakes" (water inside that isn't connected to the water around the island). One cell is a square with side length 1. The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.

Example:

Input:
[[0,1,0,0],
 [1,1,1,0],
 [0,1,0,0],
 [1,1,0,0]]
Output: 16 
*/

class Solution {
public:
    int nei(vector<vector<int>>& g,int i,int j,int s)
    {
        int c=0,n=g.size();
        if(i>0 && g[i-1][j]==1)
            c++;
        if(j>0 && g[i][j-1]==1)
            c++;
        if(i<n-1 && g[i+1][j]==1)
            c++;
        if(j<s-1 && g[i][j+1]==1)
            c++;
        return c;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int p=0;
      
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1)
                    p+=4-nei(grid,i,j,grid[i].size());
            }
        }
        return p;
    }
};
