class Solution {
public:
    int mySqrt(int x) {
        if(x==0)    return 0;
        if(x==1)    return 1;
        long int i=1,ans=1;
        while(ans<=x)
        {
            ans=i*i;
            i++;
        }
        return i-2;
    }
};