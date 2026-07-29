class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int operation=0;
        int n=nums.size();
        while(true){
              int smallest=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]<smallest && nums[i]!=0){
                smallest=nums[i];
            }
        }
            if(smallest==INT_MAX){
                break;
            }

            for(int i=0;i<n;i++){
                if(nums[i]>0){
                    nums[i]-=smallest;
                }
            }
            operation++;
            }


    return operation;
    }
};