class Solution {
public:
    void f(int i,int n,vector<vector<int>>&ans,vector<int>nums)
    {
        if(i>=n)
        {
            ans.push_back(nums);
            return;
        }
        for(int j=i;j<n;j++)
        {
            swap(nums[j],nums[i]);
            f(i+1,n,ans,nums);
            swap(nums[j],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        f(0,n,ans,nums);
        return ans;
    }
};