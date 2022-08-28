class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int p=(n+m);
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            v.push_back(nums1[i]);
        }
        for(int i=0;i<m;i++)
        {
            v.push_back(nums2[i]);
        }
        sort(v.begin(),v.end());
        if(p%2!=0)
        {
            double ans=v[p/2];
            return ans;
        }
        double ans=(v[p/2]+v[(p/2)-1])/2.0;
        return ans;
    }
};