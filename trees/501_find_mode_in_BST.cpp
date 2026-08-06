class Solution {
public:
 unordered_map<int, int>mp;
void dfs(TreeNode* root){
    if(root==nullptr) return;
    mp[root->val]++;
    dfs(root->left);
    dfs(root->right);

    }
    vector<int> findMode(TreeNode* root) {
        dfs(root);
        vector<int>ans;
        int maxfreq=0;
        for(auto it: mp ){
            maxfreq=max(maxfreq, it.second);
        }

        for(auto it: mp){
            if(it.second==maxfreq){
                ans.push_back(it.first);
            }
        }
        return ans;
}
};