class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        int n=nums.size();
        
        for(int i=0;i<=n-2;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int sum=nums[i]+nums[j];
                if(sum==target)
                {
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
        }
        if(v.size()==0)
        {
            v.push_back(-1);
            v.push_back(-1);
        }
        // v.push_back(n);
        // for()
        return v;
        
    }
};