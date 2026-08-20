class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        int count=0;
        unordered_map<int, int> mp;
        mp[0]=1;
        
        int sum=0;
        int need=0;
        
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            int need=sum-k;
            
            if(mp.find(need)!=mp.end()){
                count+=mp[need];
            }
            
            mp[sum]++;
        }
        return count;
    }
};