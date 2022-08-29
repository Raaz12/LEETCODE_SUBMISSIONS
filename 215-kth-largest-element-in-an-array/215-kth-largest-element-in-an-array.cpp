class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>v;
        // k++;
        int n=nums.size();
        // k=n-k;
       for(int i=0;i<n;i++)
       {
           v.push(nums[i]);
       }
       int ans;
       while(k--)
       {
           ans=v.top();
           v.pop();
       }
       return ans;
    }
};