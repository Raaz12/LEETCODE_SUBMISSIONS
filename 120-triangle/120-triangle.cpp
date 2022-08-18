class Solution {
public:
    int minsum(int n,vector<vector<int>>& a,int i,int j,vector<vector<int>>&dp)
    {
        if(i==n-1)  return dp[n-1][j]=a[n-1][j];
        
        int up=a[i][j]+minsum(n,a,i+1,j,dp);
        
        int down=a[i][j]+minsum(n,a,i+1,j+1,dp);
        
        if(dp[i][j]!=-1)    return dp[i][j];
        
        return dp[i][j]=min(up,down);
    }
    int minimumTotal(vector<vector<int>>& a) {
        
        int n=a.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        vector<int>prev(n,0);
        for(int i=0;i<n;i++)
        {
            prev[i]=a[n-1][i];
        }
        for(int i=n-2;i>=0;i--)
        {
            vector<int>curr(n,0);
            for(int j=i;j>=0;j--)
            {
                int up=a[i][j]+prev[j];
                
                int down=a[i][j]+prev[j+1];
                
                curr[j]=min(up,down);
                
            }
            prev=curr;
        }
        return prev[0];
        
    }
};