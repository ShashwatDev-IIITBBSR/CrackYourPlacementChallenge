class Solution {
public:
    int max_sum(TreeNode* root,int &maxi)
    {
        if(!root){return 0;}
        int leftsum,rightsum;
        leftsum=max(0,max_sum(root->left,maxi));
        rightsum=max(0,max_sum(root->right,maxi));
        maxi=max(maxi,leftsum+rightsum+root->val);
        return max(leftsum,rightsum)+root->val;
    }
    int maxPathSum(TreeNode* root) 
    {
        int maxi=-1000;
        max_sum(root,maxi);
        return maxi;
    }
};


