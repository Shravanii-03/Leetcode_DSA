class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int n=nums.size();

        if(k==0) return{};
        int j=0;
        for(int i=0;i<n;i++){
            if(j<k || nums[i]!=nums[j-k]){
                nums[j]=nums[i];
                    j++;
        }
        }
        nums.resize(j); 
        return nums;
    }
};