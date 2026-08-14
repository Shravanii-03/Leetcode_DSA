#brute
class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
             int curr=0;
            for(int j=i;j<n;j++){
                curr|=nums[j];
                if(curr>=k){
                    mini=min(curr, j-i+1);
                    break;
                }
                
            }
        }
        return mini;
    }
};

