class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s="";
        int n=columnNumber;
        while(n>0)
        {
            int rem=n%26;
            if(!rem)
            {
                n-=26;
                rem=26;
            }
            else
            {
                n-=rem;
            }
            s+=rem+64;
            n/=26;
        }
            reverse(s.begin(),s.end());
            return s;
    }
};