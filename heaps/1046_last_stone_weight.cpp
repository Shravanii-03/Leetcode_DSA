class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
          while (stones.size() > 1){
             int n=stones.size();
        sort(stones.begin(), stones.end());

        int largest=stones[n-1];
        int secondlargest=stones[n-2];

    stones.pop_back();
    stones.pop_back();
            if(secondlargest!=largest){
                stones.push_back(largest-secondlargest);
            }
          }

        if(stones.empty()){
            return 0;
        }
        return stones[0];
    }
};