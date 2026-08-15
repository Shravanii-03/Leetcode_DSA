#brute
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                if(sum==k){
                    count++;
                }
            }

        }
        return count;
    }
};

#optimal
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n=nums.size();
        int sum=0;
        int count=0;
        mp[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];

            if(mp.find(sum-k)!=mp.end()){
                count+=mp[sum-k];
            }

            mp[sum]++;
        }

    return count;
    }
};