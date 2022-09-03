class Solution {
public:
    int secondHighest(string s) {
        int firstmax=-1;
        int secondmax=-1;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            int notchar=s[i]-'0';
            if(notchar>=0 and notchar<=9)
            {
                firstmax=max(firstmax,notchar);
            }
            
        }
        for(int i=0;i<n;i++)
        {
             int notchar=s[i]-'0';
            if(notchar>-1 and notchar<firstmax and notchar<10)
            {
                secondmax=max(secondmax,notchar);
            }
        }
        return secondmax;
    }
};