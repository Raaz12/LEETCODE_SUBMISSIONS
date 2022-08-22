class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size(),sum=0;
        
        vector<int> left,right;
        
        int leftw = height[0], rightw = height[n-1];
        
        for(int i=0;i<n;i++)
        {
            leftw=max(leftw,height[i]);
            
            left.push_back(leftw);
        }
        for(int i=n-1;i>=0;i--)
        {
            rightw=max(rightw,height[i]);
            
            right.push_back(rightw);
        }
        reverse(right.begin(),right.end());
        
        for(int i=0;i<n;i++)
        {
            int curw=min(left[i],right[i])-height[i];
            
            if(curw<0) curw=0;
            
            sum+=curw;
        }
        return sum;
    }
};