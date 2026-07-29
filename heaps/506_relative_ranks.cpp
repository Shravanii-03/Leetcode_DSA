#brute
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
      int n=score.size();
      vector<string>ans(n);

        for(int i=0;i<n;i++){
            int higher=0;
            for(int j=0;j<n;j++){
                if(score[j]>score[i]){
                    higher++;
                }
            }
        
        if(higher==0){
            ans[i]="Gold Medal";}
        else if (higher==1){
        ans[i]="Silver Medal";}
        else if (higher==2){
            ans[i]="Bronze Medal";
        }
        else{
            ans[i]=to_string(higher+1);
        }

        }
        
        return ans;
    }
};


#optimal
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int, int>>pq;
        
        int n=score.size();
    vector<string>ans(n);
        for(int i=0;i<n;i++){
            pq.push({score[i], i});
        }
        int rank =1;
        while(!pq.empty()){
            int index=pq.top().second;
            pq.pop();

            if(rank ==1){
                ans[index]="Gold Medal";}
                else if(rank ==2){
                    ans[index]="Silver Medal";
                }else if (rank==3){
                    ans[index]="Bronze Medal";
                }
                else{
                    ans[index]=to_string(rank);
                }
                rank++;
            }

        
        return ans;
    }
};