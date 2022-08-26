class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int m=t.size();
        int mp[256]={0};
        int count=0;
        for(int i=0;i<m;i++)
        {
            if(mp[t[i]]==0) count++;
            mp[t[i]]++;
        }
        int i=0,j=0,ans=INT_MAX,start=0;
        while(j<n)
        {
            mp[s[j]]--;
            if(mp[s[j]]==0) count--;
            if(count==0)
            {
                while(count==0)
                {
                    if(j-i+1<ans)
                    {
                        ans=j-i+1;
                        start=i;
                    }
                    mp[s[i]]++;
                        if(mp[s[i]]==1) count++;
                    i++;
                }
                
            }
            j++;
            
        }
        if(ans!=INT_MAX)
            {
                return s.substr(start,ans);
            }
        return "";
    }
};