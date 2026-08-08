class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<int>ans;
        while(k>0){
            int  maxfreq=0;
            int element=0;
            for(pair<const int, int> p : mp){
                if(p.second>maxfreq){
                    maxfreq=p.second;
                    element=p.first;
                }
            }
            ans.push_back(element);
            mp.erase(element);
            k--;
        }
        return ans;
    }
};