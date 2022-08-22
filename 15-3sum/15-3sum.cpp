class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
         vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        
        set<vector<int>> temp;
        for(int i=0;i<n-2;i++)
        {
            if( i > 0 && nums[i-1] == nums[i] ) continue;
            int start=i+1,end=n-1;
            while(start<end)
            {
                int p=nums[i]+nums[start]+nums[end];
                if(p==0)
                {
                    vector<int>w;
                    w.push_back(nums[i]);
                    w.push_back(nums[start]);
                    w.push_back(nums[end]);
                    temp.insert(w);
                    start++;
                    end--;
                    // break;
                }
                else if(p<0)
                {
                    start++;
                }
                else end--;
            }
           
        }
        for( auto val : temp)
        {
            v.push_back(val);
        }
        return v;
    }
};