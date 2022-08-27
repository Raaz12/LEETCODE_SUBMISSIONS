class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n=nums.size(),ans=0;
       int start=0,end=n-1;
        if(n==1)    return 0;
        while(start<end)
        {
            int mid=start+(end-start)/2;
            if(mid>0 and mid<n-1)
            {
                if(nums[mid]>nums[mid+1] and nums[mid]>nums[mid-1])
                    return mid;
            
            else if(nums[mid]<nums[mid+1])  start=mid+1;
           
            else    end=mid-1;
            
            }
            else if(mid==0)
            {
                if(nums[mid]>nums[mid+1])  return mid;
                return 1;
            }
            else if (mid==n-1)
            {
                if(nums[mid-1]>nums[mid-2])   return mid-1;
                return mid-2;
            }
           
        }
         return start;
    }
    };