class Solution {
public:
    bool isleaf(TreeNode* a)
    {
        //if(!a){return false;}
        if((!a->left)&&(!a->right)){return true;}
        return false;
    }
    void LeftLeaves(TreeNode *a,int &sum)
    {
        if(!a){return;}
        if(a->left!=NULL)
        {
            if(isleaf(a->left))
            {sum=sum+a->left->val;}
        }
        LeftLeaves(a->left,sum);
        LeftLeaves(a->right,sum);
    }
    int sumOfLeftLeaves(TreeNode* root) 
    {
        int sum=0;
        LeftLeaves(root,sum);
        return sum;
    }
};


