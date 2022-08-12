class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        int n=nums.size();
        
        int m=n-1,count1=0;
        
        map<int,int>mp;
        
        for(int i=0;i<n;i++)
        {
            
            mp[nums[i]]++;
            
        }
        
        for(auto val : mp)
        {
            
            if(k==0) 
            {
                if(val.second>=2)
                count1++;
                
            }
            
           else if(mp.find(val.first - k) != mp.end())
            {
                count1++;
            } 
        }
        
        return count1;
    }
};