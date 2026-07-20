#brute
class Solution
{
public:
    int celebrity(vector<vector<int>> &M){
        int n=M.size();
        vector<int>knowme(n, 0);
        vector<int>iknow(n, 0);


        for(int i=0;i<M.size();i++){
            for(int j=0;j<M.size();j++){
                if(M[i][j]==1){
                    knowme[j]++;
                    iknow[i]++;
                }
            }

        }
        for(int i=0;i<M.size();i++){
            if(knowme[i]==n-1 && iknow[i]==0){
                return i ;
            }
        }
        return -1;
    }
};


#optimal
class Solution
{
public:
    int celebrity(vector<vector<int>> &M){
        int n=M.size();
        int a=0;
        int b=n-1;

        while(a<b){
            if(M[a][b]==1 ){
                a++;
            }
            else{
                b--;
            }
        }

        int candidate=a;
        for(int i=0;i<n;i++){
            if (i==candidate) continue;
            if(M[candidate][i]==1 || M[i][candidate]==0) return -1;
        }
       
        
        return candidate;
    }
};
