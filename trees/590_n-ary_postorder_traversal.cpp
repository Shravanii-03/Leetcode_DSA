class Solution {
public:
vector<int>ans;
void traverse(Node* root){
    if(root==nullptr) return;

    for(Node* child: root->children){
        traverse(child);

    }
    ans.push_back(root->val);
}
    vector<int> postorder(Node* root) {
        traverse(root);
        return ans;
    }
};