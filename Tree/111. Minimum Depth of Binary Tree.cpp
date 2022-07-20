class Solution {
public:
    int minDepth(TreeNode* root) 
    {
        if(!root){return 0;}
        int l=minDepth(root->left),r=minDepth(root->right);
        if(!l&&!r){return 1;}
        else if(!l){return 1+r;}
        else if(!r){return 1+l;}
        else{return 1+min(l,r);}
    }
};