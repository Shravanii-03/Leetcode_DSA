class Solution {
public:
int ans=0;
int tilt(TreeNode* root){
      if(root==nullptr) return 0;

      int sumleft=tilt(root->left);
      int sumright=tilt(root->right);
    ans+=abs(sumleft-sumright);
      return root->val+ sumleft+sumright;
}
    int findTilt(TreeNode* root) {
        tilt(root);
        return ans;
        
    }
};