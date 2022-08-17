class Solution {
public:
    int minPath(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& dp)
    {
        if(i==0 and j==0)   return grid[0][0];
        
        if(i<0 or j<0)  return 10000;
        if(dp[i][j]!=-1)    return dp[i][j];
        int up=grid[i][j]+minPath(i-1,j,grid,dp);
        
        int down=grid[i][j]+minPath(i,j-1,grid,dp);
        
        return dp[i][j]=min(up,down); 
    }
    int minPathSum(vector<vector<int>>& grid) {
        
        int i=grid.size();
        
        int j=grid[0].size();
        vector<vector<int>>dp(i,vector<int>(j,-1));
        return minPath(i-1,j-1,grid,dp);
        
    }
};