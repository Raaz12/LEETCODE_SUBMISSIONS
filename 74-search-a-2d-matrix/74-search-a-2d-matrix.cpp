class Solution {
public:
     bool binSearch(vector <vector <int>> &mat, int n, int m, int x)
    {
         int i=0,j=m-1;
        while(i<n and j>=0)
        {
            if(mat[i][j]==x)    return true;
            else if(mat[i][j]>x)
            {
                j--;
            }
            else
            {
                i++;
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