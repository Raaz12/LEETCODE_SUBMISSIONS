class Solution {
public:
     bool binSearch(vector <vector <int>> &mat, int n, int m, int x)
    {
        for(int i=0;i<n;i++)
        {
            int start=0,end=m-1;
            while(start<=end)
            {
                int mid=start+(end-start)/2;
                if(mat[i][mid]==x)  return true;
                else if(mat[i][mid]>x)
                {
                    end=mid-1;
                }
                else{
                    
                    start=mid+1;
                    
                }
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        return binSearch(matrix,n,m,target);
    }
};