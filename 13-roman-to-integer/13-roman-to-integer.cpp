class Solution {
public:
    int pos(char a,vector<pair<char,int>>v)
    {
         for(int i=0;i<7;i++)
            {
             
                if(a==v[i].first)
                {
                    
                 return i;
                    
                }
             
            }
        
        return -1;
    }
    int romanToInt(string s) {
        
        vector<pair<char,int>>v;
        
        v.push_back(make_pair('I',1));
        
        v.push_back(make_pair('V',5));
        
        v.push_back(make_pair('X',10));
        
        v.push_back(make_pair('L',50));
        
        v.push_back(make_pair('C',100));
        
        v.push_back(make_pair('D',500));
        
        v.push_back(make_pair('M',1000));
        
        int sum=0;
        
        int n=s.size();
        
        int p=0,q=0;
        
        for(int i=0;i<n;i++)
        {
            if(i<n-1)
            {
                 p=v[pos(s[i],v)].second;
                
                 q=v[pos(s[i+1],v)].second;
                
                if(p<q)
                {
                    sum+=q-p;
                    
                    q=0;
                    
                    i++;
                }
                else
                {
                    sum+=p;
                }
            }
            else
            {
                 p=v[pos(s[i],v)].second;
                
                 sum+=p;
                
            }
        
        }
        return sum;
    }
};