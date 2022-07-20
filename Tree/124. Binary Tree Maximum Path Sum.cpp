/*class Solution {
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
*/
class Solution {
public:
    int maxi=INT_MIN;
    int maxsum(TreeNode *root)
    {
        if(!root){return 0;}
        int l_sum=maxsum(root->left),r_sum=maxsum(root->right);
        if(l_sum<0 && r_sum<0){maxi=max(maxi,root->val);return root->val;}
        if(l_sum<0){maxi=max(maxi,root->val+r_sum);return root->val+r_sum;}
        if(r_sum<0){maxi=max(maxi,root->val+l_sum);return root->val+l_sum;}
        maxi=max(maxi,l_sum+r_sum+root->val);
        return root->val+max(l_sum,r_sum);
    }
    int maxPathSum(TreeNode* root) 
    {
        maxsum(root);
        return maxi;
    }
};