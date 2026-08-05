class Solution {
public:
    vector<string>ans;
    void solve(TreeNode* root,string path){
        if(root==nullptr) return;
        path+=to_string(root->val);
        if(root->left==nullptr && root->right==nullptr){
            ans.push_back(path);
        }
        path+="->";

        solve(root->left, path);
        solve(root->right, path);

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        solve(root, "");
        return ans;
    }
};