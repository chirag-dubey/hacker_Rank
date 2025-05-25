class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        int srow=0,scol=0,erow=n-1,ecol=n-1;
        vector<vector<int>> arr(n, vector<int>(n));
        int num=1;
        while(srow<=erow && scol<=ecol){
            for(int i=scol;i<=ecol;++i){
                arr[srow][i]=num;
               num+=1;
            }
             for(int i=srow+1;i<=erow;++i){
               arr[i][ecol]=num;
               num+=1;
            }
             for(int i=ecol-1;i>=scol;--i){
                if(srow==erow){
                    break;
                }
               arr[erow][i]=num;
               num+=1;
            }
             

             for(int i=erow-1;i>=srow+1;--i){
                if(scol==ecol){
                    break;
                }
               arr[i][scol]=num;
               num+=1;
            }
            srow++;erow--;scol++;ecol--;
        }
        return arr;
    }
};
