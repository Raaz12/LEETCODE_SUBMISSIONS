class Solution {
public:
    int sum(int n)
    {
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            sum+=i;
        }
        return sum;
    }
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto val:mp)
        {
            count+=sum(val.second-1);
        }
        return count;
    }
};