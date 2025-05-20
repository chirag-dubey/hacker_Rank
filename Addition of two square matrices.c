// User function Template for C++

class Solution {
  public:
    void Addition(vector<vector<int>>& matrixA, vector<vector<int>>& matrixB) {
        int total=0;
        int n=matrixA.size();
        //vector<vector<int>> matrixA(n, vector<int>(n));
      
      for(int i=0;i<n;++i){
          for(int j=0;j<n;++j){
              total=matrixA[i][j]+matrixB[i][j];
             // matrixA[i].push_back(total);
             matrixA[i][j]=total;
          }
          
      }  
      
    }
};
