#better
class Solution {
  public:
    bool fourSum(vector<int>& arr, int x) {
        // code here
        sort(arr.begin(), arr.end());
        for(int i=0;i<arr.size()-3;i++){
            for(int j=i+1;j<arr.size()-2;j++){
            int l=j+1;
        int r=arr.size()-1;
        
        while(l<r){
            if(arr[i]+arr[j]+arr[l]+arr[r]==x){
                return true;
            }
            
            else if(arr[i]+arr[j]+arr[l]+arr[r]<x ){
                l++;
            }
            else{
                r++;
            }
        }
        }
        }
        return false;
    }
};


