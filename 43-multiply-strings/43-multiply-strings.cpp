class Solution {
public:
    string multiply(string s1, string s2) {
         int n=s1.size();
       int m=s2.size();
       if(s1=="0" or s2=="0")    return "0";
    //   reverse(s1.begin(),s1.end());
    //   reverse(s2.begin(),s2.end());
    vector<int>v(n+m,0);
       for(int i=n-1;i>=0;i--)
       {
           for(int j=m-1;j>=0;j--)
           {
               int num1=s1[i]-'0';
               int num2=s2[j]-'0';
               v[i+j+1]+=num1*num2;
               v[i+j]+=v[i+j+1]/10;
               v[i+j+1]%=10;
           }
       }
       string ans="";
       int i=0;
       while(i<v.size() and v[i]==0)
        {
            i++;
        }
        while(i<v.size())
        {
            ans+=v[i]+'0';
            i++;
        }
           
       return ans;
    }
};