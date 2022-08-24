class Solution {
public:
    bool checkPowersOfThree(int n) {
        
        for(int i=19;i>=0;i--)
        {
            int ans=pow(3,i);
            
            if(ans>n)  continue;
            
            else    n-=ans;
            
            if(n==0)    return true;
        }
        return false;
    }
};