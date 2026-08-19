class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        int l=0;
        int r=arr.size()-1;
        int diff=INT_MAX;
        vector<int> result(2);
        sort(arr.begin(), arr.end());
        if(arr.size() < 2)
        return {};
        while(l<r){
            int sum=arr[l]+arr[r];
            int curr=abs(target-sum);
            int currAbsDiff=abs(arr[l]-arr[r]);
            
            if(curr<diff){
                diff=curr;
                result[0]=arr[l];
                result[1]=arr[r];
            }
            else if(curr == diff) {
            int oldAbsDiff = abs(result[0] - result[1]);

            if(currAbsDiff > oldAbsDiff) {
                result = {arr[l], arr[r]};
            }
            }
            
            if(sum>target){
                r--;
            }
            else{
                l++;
            }
            
        }
        return result;
    }
};