class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n=prices.size();
        int first=INT_MAX;
        int second=INT_MAX;

        for(int i=0;i<n;i++){
            if(prices[i]<first){
                  second = first;
                first = prices[i];
            }
            else if (prices[i] < second) {
                second = prices[i];
            }
        }

        int cost = first + second;

        if (cost <= money) {
            return money - cost;
        }

        return money;
    }
};