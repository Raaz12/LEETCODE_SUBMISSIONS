class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        int m=n/2;
        vector<int>v;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        
        for(auto val:mp)
        {
            v.push_back(val.second);
        }
        sort(v.begin(),v.end(),greater<int>());
        int sum=0,i=0;
        n=v.size();
        while(sum<m and i<n)
        {
            sum+=v[i];
            i++;
            // if(sum>=m)  return i;
            
        }
        return i;
    }
};