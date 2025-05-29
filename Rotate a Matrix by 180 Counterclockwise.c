
class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // Code here
        int N=mat.size();
        int i=0;
        while(i<N){
            int l=0,r=N-1;
            while(l<r){
                int temp=mat[i][l];
                mat[i][l]=mat[i][r];
                mat[i][r]=temp;
                ++l,--r;
            }
            ++i;
         }
         i=0;
        while(i<N){
            int l=0,r=N-1;
            while(l<r){
                int temp=mat[l][i];
                mat[l][i]=mat[r][i];
                mat[r][i]=temp;
                ++l,--r;
            }
            ++i;
         }
       
         
         
        
    }
};
