
class Solution {
public:
    int find_max(TreeNode* root,int &maxi)
    {
        if(!root){return 0;}
        int lh,rh;
        lh=find_max(root->left,maxi);
        rh=find_max(root->right,maxi);
        maxi=max(maxi,lh+rh);
        return max(lh,rh)+1;
    }
    int diameterOfBinaryTree(TreeNode* root)
    {
        int maxi=0;
        find_max(root,maxi);
        return maxi;
    }
};