#brute
class Solution {
  public:
    int maxLen(vector<int> &arr) {
        // Your code here
        int n=arr.size();
       
        int maxlen=INT_MIN;
        for(int i=0;i<n;i++){
            int len=0;
             int count1=0;
        int count0=0;
            for(int j=i;j<n;j++){
            if(arr[j]==0){
                count0++;
            }
            else{
                count1++;
            }
            if(count0==count1){
                len=j-i+1;
                maxlen=max(maxlen, len);
            }
        }
    }
    return maxlen;
    }
};


