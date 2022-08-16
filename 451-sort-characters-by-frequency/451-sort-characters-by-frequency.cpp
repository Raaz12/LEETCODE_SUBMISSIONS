class Solution {
public:
    string frequencySort(string s) {
        map<char,int>v;
        vector<pair<int ,char>>a;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            v[s[i]]++;
        }
        for(auto val:v)
        {
            a.push_back(make_pair(val.second,val.first));
        }
        string b="";
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<a[i].first;j++)
            {
                b+=a[i].second;
            }
        }
        return b;
    }
};