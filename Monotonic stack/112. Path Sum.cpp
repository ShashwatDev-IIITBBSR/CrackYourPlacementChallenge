class Solution {
public:
    void PathSum(TreeNode* root, int targetSum,int &Sum,bool &a)
    {
        if(!root){return;}
        Sum=Sum+root->val;
        if((Sum==targetSum)&(!root->right&&!root->left)){a=true;}
        PathSum(root->left,targetSum,Sum,a);
        PathSum(root->right,targetSum,Sum,a);
        Sum=Sum-root->val;   //Important Step
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int Sum=0;
        bool a=false;
        PathSum(root,targetSum,Sum,a);
        return a;
    }
};