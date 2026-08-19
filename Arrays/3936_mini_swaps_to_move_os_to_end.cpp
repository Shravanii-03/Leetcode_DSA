class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int count=0;

        while(l<r){
            while(l<r && nums[l]!=0){
                l++;
            }
            while(l<r && nums[r]==0){
                r--;
            }

            if(l<r){
                swap(nums[l], nums[r]);
                count++;
                l++;
                r--;
            }
            
        }
        return count;
    }
};