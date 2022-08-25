class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int n=ransomNote.size();
        int m=magazine.size();
        for(int i=0;i<n;i++)
        {
            int ransom=count(ransomNote.begin(),ransomNote.end(),ransomNote[i]);
            int magaz=count(magazine.begin(),magazine.end(),ransomNote[i]);
            if(magaz<ransom)   return false;
        }
        return true;
            
    }
};