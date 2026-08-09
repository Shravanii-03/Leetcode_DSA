class Solution {
public:
    vector<int> ans;
    void traverse(Node* root) {
        if(root==nullptr) return;
        ans.push_back(root->val);
        for(Node* child: root->children){
            traverse(child);
        }
    }
     vector<int> preorder(Node* root){
        traverse(root);
        return ans;
     }
};