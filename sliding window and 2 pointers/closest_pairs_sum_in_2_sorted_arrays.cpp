class Solution {
  public:
    vector<int> findClosestPair(vector<int> &arr1, vector<int> &arr2, int x) {
        // code here
        int diff=INT_MAX;
        int l=0;
        int r=arr2.size()-1;
        vector<int> result(2);
        while(l<arr1.size() && r>=0){
            int sum=arr1[l]+arr2[r];
            int curr=abs(sum-x);
            
            if(diff>curr){
                diff=curr;
                result[0] = arr1[l];
                result[1] = arr2[r];
        }
        
        if(sum>x){
            r--;
        }
        else{
            l++;
        }
        
    }
    return result;
    }
};