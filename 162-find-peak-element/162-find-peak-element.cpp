class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n=nums.size(),ans=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]<nums[i]) ans=i;
        }
        return ans;
    }
};