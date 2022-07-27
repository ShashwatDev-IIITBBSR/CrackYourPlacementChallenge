Solution 1
class Solution {
public:
    void difference(TreeNode *a,int &min_diff)
    {
        TreeNode*k;
        k=a;
        int curr_diff;
        if(!a){return;}
        if(a->left)
        {
            k=a->left;
            while(k->right!=NULL)//going for rightmost node of left subtree
            {
                k=k->right;
            }
            curr_diff=(a->val)-(k->val);
            if(curr_diff<min_diff)
            {
                min_diff=curr_diff;
            }
        }
        if(a->right)
        {
            k=a->right;
            while(k->left!=NULL)//going for leftmost node of right subtree
            {
                k=k->left;
            }
            curr_diff=k->val-(a->val);
            if(curr_diff<min_diff)
            {
                min_diff=curr_diff;
            }
        }
        difference(a->left,min_diff);
        difference(a->right,min_diff);
    }
    int getMinimumDifference(TreeNode* root) 
    {
        int min_diff;
        if((!root)||(!root->left&&!root->right))
        {
            return 0;
        }
        if(!root->left){min_diff=root->right->val-root->val;}
        
        else{min_diff=root->val-root->left->val;}
        difference(root,min_diff);
        return min_diff;
    }
};
Solution 2
class Solution {
public:
    int min_val=INT_MAX;
    void inorder(TreeNode *root,int &prev)
    {
        if(root->left){inorder(root->left,prev);}
        min_val=min(min_val,root->val-prev);
        prev=root->val;
        if(root->right){inorder(root->right,prev);}
    }
    int getMinimumDifference(TreeNode* root) 
    {
        int prev=-100000;
        inorder(root,prev);
        return min_val;
    }
};
