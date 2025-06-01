class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int sum=0,c1=0;
        int n=bank.size();
        int m=bank[0].size();
        for(int i=0;i<n;++i){
            int c=0;
            for(int j=0;j<m;++j){
               if(bank[i][j]=='1'){
                c++;
               }
            }
        cout<<c<<" ";
            if(c>0){
            sum+=c*c1;
            cout<<"helo";
            c1=c;
            }   
        }
        return sum;
    }
};
