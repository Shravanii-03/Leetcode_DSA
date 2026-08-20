class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());
        for(int i=2;i<arr.size();i++){
            int l=0;
            int r=arr.size()-1;
            while(l<r){
                if(arr[l]+arr[r]==arr[i]){
                    return true;
                }
                else if(arr[l]+arr[r]>arr[i]){
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        return false;
    }
};