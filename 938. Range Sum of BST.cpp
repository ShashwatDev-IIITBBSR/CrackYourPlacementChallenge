class Solution {
public:
    void range(TreeNode *a,int& sum,int high,int low)
    {
        if(!a){return;}
        if((a->val>=low)&&(a->val<=high)){sum=sum+a->val;}
        range(a->left,sum,high,low);
        range(a->right,sum,high,low);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root){return 0;}
        int sum=0;
        range(root,sum,high,low);
        return sum;
    }
};