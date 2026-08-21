#brute
class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        
        int minlen=INT_MAX;
        for(int i=0;i<arr.size();i++){
            int sum=0;
            int len=0;
            for(int j=i;j<arr.size();j++){
                sum+=arr[j];
                len++;
                if(sum>x){
                    minlen=min(minlen, len);
                    break;
                }
            }
        }
       if(minlen==INT_MAX) return 0;
       return minlen;
    }
};



#optimal
class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // code here
        int n=arr.size();
        int l=0;
        int minlen=INT_MAX;
        int sum=0;
        
        
        for(int r=0;r<n;r++){
            sum+=arr[r];
            
            while(sum>x){
                minlen=min(minlen, r-l+1);
                sum-=arr[l];
                l++;
            }
            
        }
        if(minlen==INT_MAX){
            return 0;
        }
        return minlen;
    }
};
