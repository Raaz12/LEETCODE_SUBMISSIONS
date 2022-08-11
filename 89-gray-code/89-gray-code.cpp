class Solution {
public:
    vector<int> grayCode(int n) {
            vector<string>ans=generat(n);
        
                vector<int>bns;
        for(auto val:ans)
        {
            bns.push_back(stoi(val,0,2));
        }
        return bns;
        
    }
    vector<string>generat(int n)
    {
        if(n==1)
        {
            return {"0","1"};
        }
        vector<string>ans;
        vector<string> bns=generat(n-1);
        
        for(int i=0;i<bns.size();i++)
        {
            ans.push_back("0"+bns[i]);
        }
        for(int i=bns.size()-1;i>=0;i--)
        {
            ans.push_back("1"+bns[i]);
        }
        return ans;
    }
};