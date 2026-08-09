class Solution {
public:
    bool check(TreeNode* root, TreeNode* subRoot) {
        if(root==nullptr && subRoot==nullptr) return true;
        if(root==nullptr || subRoot==nullptr) return false;
        if(root->val!=subRoot->val){
            return false;
        }
        return check(root->left, subRoot->left)&& check(root->right, subRoot->right);

    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot){
        if(root==nullptr) return false;
        if (check(root, subRoot))
            return true;

        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }
};