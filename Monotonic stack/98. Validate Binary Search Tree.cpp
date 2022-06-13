//My solution Number 1
class Solution {
public:
    int find(TreeNode* root,int q)
    {
        if(q==0)//right most element of left subtree
        {
            while(root->right)
            {
                root=root->right;
            }
            return root->val;
        }
        else//left most element of right subtree
        {
            while(root->left)
            {
                root=root->left;
            }
            return root->val;
        }
    }   
    bool isValidBST(TreeNode* root) 
    {
        int h;
        if(!root||(!root->left&&!root->right)){return true;}
        if(root->left)
        {
            h=find(root->left,0);
            if(root->val<=h)
            {
                return false;
            }
        }
        if(root->right)
        {
            h=find(root->right,1);
             if(root->val>=h)
            {
                return false;
            }
        }
        return isValidBST(root->left)&&isValidBST(root->right);
    }
};
//2nd solution
class Solution {
public:
    void inorder_traversal(TreeNode *root,vector<int> &q)
    {
        if(!root){return;}
        inorder_traversal(root->left,q);
        q.push_back(root->val);
        inorder_traversal(root->right,q);
    }
    bool isValidBST(TreeNode* root) 
    {
        vector<int> q;
        int i;
        bool a=true; 
        inorder_traversal(root,q);
        for(i=1;i<q.size();i++)
        {
            if(q[i-1]>=q[i])
            {
                a=false;
                break;
            }
        }
        return a;
    }
};   
    