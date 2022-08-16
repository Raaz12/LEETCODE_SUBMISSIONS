class Solution {
public:
    int firstUniqChar(string s) {
       unordered_map<char ,int>v;
        string a="";
        for(int i=0;i<s.size();i++)
        {
            v[s[i]]++;
        }
        // char a;
        int ans=INT_MAX;
        for(auto val:v)
        {
            if(val.second==1)
            {
                a+=val.first;
            }
        }
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<s.size();j++)
            {
                if(s[j]==a[i]) ans=min(ans,j);
            }
        }
        if(ans!=INT_MAX)    return ans;
        return -1;
    }
};