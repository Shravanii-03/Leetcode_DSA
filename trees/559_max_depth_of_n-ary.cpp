class Solution {
public:
    int maxDepth(Node* root) {
        if(root==nullptr) return 0;

        int depth=0;
        for(Node* child: root->children){
            depth=max(maxDepth(child), depth);
        }
        return 1+ depth;

    }
};