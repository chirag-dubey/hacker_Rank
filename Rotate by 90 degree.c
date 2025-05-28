
class Solution {
  public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& mat) {
        // code here
       int N=mat.size();
        for(int i=0;i<N;++i){
            for(int j=i+1;j<N;++j){
                int temp=mat[i][j];
                mat[i][j]=mat[j][i];
                mat[j][i]=temp;
            }
        }
        int i=0;
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
