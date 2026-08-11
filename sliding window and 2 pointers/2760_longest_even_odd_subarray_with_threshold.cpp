class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        
        int n = nums.size();
        int maxi = 0;
        int l = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] > threshold) {
                l = 0;
                continue;
            }
            if (l == 0) {
                if (nums[i] % 2 == 0) {
                    l = 1;
                }

            }
            else {
                if (nums[i] % 2 != nums[i - 1] % 2) {
                    l++;
                }
                else {
                    if (nums[i] % 2 == 0)
                        l = 1;
                    else
                        l = 0;
                }
            }

            maxi = max(maxi, l);
        }

        return maxi;
    }
};