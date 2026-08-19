class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        // Code here
        unordered_map<int, vector<int>> map;
        vector<vector<int>>ans;
        for(int j=0;j<arr.size();j++){
            for(int k=j+1;k<arr.size();k++){
                int value=-1*(arr[j]+arr[k]);
                
                if(map.find(value)!=map.end()){
                    for(auto i:map[value]){
                        ans.push_back({i, j,k});
                    }
                }
            }
            map[arr[j]].push_back(j);
        }
        return ans;
    }
};