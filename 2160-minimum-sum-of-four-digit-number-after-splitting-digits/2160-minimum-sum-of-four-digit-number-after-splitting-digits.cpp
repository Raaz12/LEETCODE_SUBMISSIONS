class Solution {
public:
    int minimumSum(int num) {
        vector<int>v;
        while(num>0)
        {
            v.push_back(num%10);
            num/=10;
        }
        
            int n=v.size();
        sort(v.begin(),v.end());
        int ans=0;
        ans=ans+v[0]*10+(v[n-1]);
        int bns=0;
        bns+=v[1]*10+(v[n-2]);
        return ans+bns;
    }
};