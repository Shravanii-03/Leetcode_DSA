class Solution {
  public:
    vector<int> rangeSumQueries(vector<int>& arr, vector<vector<int>>& queries) {
        // code here
        int n=arr.size();
        vector<int> ans;
        vector<int> prefix(n);
        for(int i=0;i<n;i++){
            prefix[0]=arr[0];
            prefix[i]=prefix[i-1]+arr[i];
            
        }
        for(int i=0;i<queries.size();i++){
            int l=queries[i][0];
             int r=queries[i][1];
             
             if(l==0){
                 ans.push_back(prefix[r]);
             }
             
             else{
                ans.push_back(prefix[r]-prefix[l-1]);
             }
        }
        return ans;
        
    }
};