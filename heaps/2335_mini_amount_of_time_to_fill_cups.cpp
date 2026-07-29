class Solution {
public:
    int fillCups(vector<int>& amount) {
        int time=0;
        while(amount[0] || amount[1] || amount[2]){
            sort(amount.begin(), amount.end());
                if(amount[1]>0 && amount[2]>0){
                    amount[1]--;
                     amount[2]--;
                }
            else{
                amount[2]--;
            }
            time++;
        }
        
        return time;
    }
};