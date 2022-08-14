class Solution {
public:
    int path(int n,int m,vector<vector<int>>dp)
    {
        long long int N=n+m-2;
        m=min(n,m)-1;
       long long int ans=1;
        for(int i=1;i<=m;i++)
        {
            ans=ans*(N)/i;
            N--;
        }
        
        return ans;
    }
    int uniquePaths(int n, int m) {
        vector<vector<int>>dp(n*m , vector<int>(n*m,-1));
        return path(n,m,dp);
    }
};