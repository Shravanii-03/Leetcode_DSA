class Solution {
public:
bool issorted(vector<int>& nums){
    int n=nums.size();
    for(int i=1;i<n;i++){
        if( nums[i]<nums[i-1]){
            return false;
        }
    }
           return true;

}
    int minimumPairRemoval(vector<int>& nums) {
        int operations=0;
        while(!issorted(nums)){
            int minind=0;
            int minsum=INT_MAX;
            for(int i=0;i<nums.size()-1;i++){
                int sum=nums[i]+nums[i+1];
                if(sum<minsum){
                    minsum=sum;
                    minind = i;
                }
            }
             nums[minind] = nums[minind] + nums[minind + 1];

            nums.erase(nums.begin() + minind + 1);

            operations++;

        }
          return operations;
    }
};