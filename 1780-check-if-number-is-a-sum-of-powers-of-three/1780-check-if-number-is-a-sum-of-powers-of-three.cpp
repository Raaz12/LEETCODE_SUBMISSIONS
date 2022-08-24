class Solution {
public:
    bool checkPowersOfThree(int n) {
        vector<int>v;
        for(int i=0;i<20;i++)
        {
            int ans=pow(3,i);
            v.push_back(ans);
        }
        for(int i=19;i>=0;i--)
        {
            if(v[i]>n)  continue;
            else    n-=v[i];
            if(n==0)    return true;
        }
        return false;
    }
};