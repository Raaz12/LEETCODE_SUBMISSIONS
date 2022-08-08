class Solution {
public:
    int ans(int i,int pr, vector<int>&arr,int n,vector<vector<int>>& v)
    {
        if(i==n)    return 0;
        
        if(v[i][pr+1]!=-1) return v[i][pr+1];
        
        int len=0+ans(i+1,pr,arr,n,v);
        
        
        if(pr==-1 or arr[i]>arr[pr])
        {
            
       len=max(len,1+ans(i+1,i,arr,n,v));
             
            
        }
        
        return v[i][pr+1]=len;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        
        vector<vector<int>>v(n,vector<int>(n+1,-1));
        
        return ans(0,-1,nums,n,v);
    }
};