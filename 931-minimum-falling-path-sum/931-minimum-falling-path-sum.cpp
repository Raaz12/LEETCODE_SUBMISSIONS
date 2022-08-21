class Solution {
public:
    int minpath(int i,int j,vector<vector<int>>& matrix, vector<vector<int>>&dp)
    {
        
            if(j<0 or j>=matrix[0].size()) return 1e8;
        
            if(i==0)    return matrix[0][j];
        if(dp[i][j]!=-1)    return dp[i][j];
        
        int up=matrix[i][j]+minpath(i-1,j,matrix,dp);
        
        int down=matrix[i][j]+minpath(i-1,j-1,matrix,dp);
        
        int left=matrix[i][j]+minpath(i-1,j+1,matrix,dp);
        
        
        return dp[i][j]=min(up,min(down,left));
        
            
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        
        int mix=1e8;
        
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        
        for(int i=0;i<n;i++)
        {
            
            mix=min(mix,minpath(n-1,i,matrix,dp));
            
        }
        return mix;
    }
};