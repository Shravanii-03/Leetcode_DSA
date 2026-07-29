class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>>rows;
        int n=mat.size();
        int m=mat[0].size();

        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            rows.push_back({count, i});
        }
    sort(rows.begin(), rows.end());
    vector<int> ans;
    for(int i=0;i<k;i++){
        ans.push_back(rows[i].second);
    }
    return ans;
    }
};