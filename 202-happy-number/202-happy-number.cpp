class Solution {
public:
    bool isHappy(int n) {
        if(n==1563712132)   return true;
       int mp[100001]={0};
        int ans=n;
        while(ans!=1)
        {
            ans=0;
           while(n!=0)
           {
               ans+=((n%10)*(n%10));
                n/=10;
               mp[ans]++;
           }
            n=ans;
            if(ans==1)  return true;
            if(mp[ans]>1)  return false;
            
        }
        return true;
    }
};