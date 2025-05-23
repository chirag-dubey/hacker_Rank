
class Solution {
  public:
    // Function to return list of integers that form the boundary
    // traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> >& mat) {
        int r=mat.size();
        int c=mat[0].size();
        vector<int> arr;
        
        for(int i=0;i<c;++i){
            arr.push_back(mat[0][i]);
        }
        for(int j=1;j<r;++j){
            arr.push_back(mat[j][c-1]);
        }
        for(int i=c-2;i>=0;--i){
            arr.push_back(mat[c-1][i]);
        }
        for(int i=r-2;i>=1;--i){
            arr.push_back(mat[i][0]);
        }
       return arr; 
    }
};
