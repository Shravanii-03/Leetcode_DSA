class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int, int> mp;
        int n=arr.size();
        int sum=0;
        
        mp[0]=-1;
        int maxlen=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            int need=sum-k;
            
            if(mp.find(need)!=mp.end()){
                int len=i-mp[need];
                maxlen=max(maxlen, len);
            }
            
            if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }
        }
        return maxlen;
    }
};