#brute
class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n=arr.size();
        int water=0;
        // code here
        for(int i=0;i<n;i++){
            int left=arr[i];
            
            for(int j=0;j<i;j++){
                left=max(left, arr[j]);
            }
            int right=arr[i];
            for(int j=i+1;j<n;j++){
                right=max(right, arr[j]);
            }
            water+=(min(left, right))-arr[i];
        }
        
        return water;
    }
};

