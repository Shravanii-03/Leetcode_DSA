#better
class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here

       for(int i=0;i<arr.size()-2;i++){
            unordered_set<int>st;
            for(int j=i+1;j<arr.size();j++){
                int third=target-arr[i]-arr[j];
                
                if(st.find(third)!=st.end()){
                   return true;
                }
                
                st.insert(arr[j]);
            }
            
            
        }
        return false;
    }
};


#optimal 
class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        sort(arr.begin(), arr.end());
        for(int i=0;i<arr.size()-2;i++){
            int l=i+1;
            int r=arr.size()-1;
            int sum=target-arr[i];
        while(l<r){
            if(sum==arr[l]+arr[r]){
                return true;
            }
            else if(arr[l] + arr[r] > sum){
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

