class Solution {
  public:
    int DiagonalSum(vector<vector<int> >& matrix) {
        long sum=0;
        int n=matrix[0].size();
        for(int i=0;i<n;++i){
            sum=sum+matrix[i][i];
        }
       int i=0,j=n-1;
        while(i<n&&j>=0){
            sum=sum+matrix[i][j];
            ++i,--j;
        }
        return sum;
    }
};
