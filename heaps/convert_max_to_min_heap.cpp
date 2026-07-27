class Solution {
public:
    void maxheapify(vector<int>& nums, int n, int i){
       int largest=i;
        int l=2*i+1;
        int r=2*i+2;

        if(l<n &&  nums[l]>nums[largest]){
            largest=l;
        }
        if(r<n &&  nums[r]>nums[largest]){
            largest=r;
        }
        if(largest!=i){
            swap(nums[largest], nums[i]);
            maxheapify(nums, n, largest);
        }
    }
    vector<int> minToMaxHeap(vector<int> nums) {
        int n=nums.size();
        for(int i=n/2 -1;i>=0;i--){
            maxheapify(nums, n,i);

        }
        return nums;
    }
};