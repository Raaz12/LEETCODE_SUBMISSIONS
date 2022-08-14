class Solution {
public:
    int path(int n,int m,vector<vector<int>>dp)
    {
        dp[0][0]=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 and j==0)   dp[0][0]=1;
                else
                {
                    int up=0;
                    int down=0;
                    if(i>0 ) up=dp[i-1][j];
                    if(j>0)  down=dp[i][j-1];
                    dp[i][j]=up+down;
                }
            }
            
        }
        
        return dp[n-1][m-1];
    }
    int uniquePaths(int n, int m) {
        vector<vector<int>>dp(n*m , vector<int>(n*m,-1));
        return path(n,m,dp);
    }
};