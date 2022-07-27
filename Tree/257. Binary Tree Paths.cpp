class Solution {
public:
    vector<string>vec;
    void preorder(TreeNode *root,string s)
    {
        if(s.size()==0)
        {
            s=to_string(root->val);
        }
        else
        {
            s=s+"->"+to_string(root->val);
        }
        if(!root->left&&!root->right)
        {
            vec.push_back(s);
            return;
        }
        if(root->left!=NULL)
        {
            preorder(root->left,s);
        }
        if(root->right!=NULL)
        {
            preorder(root->right,s);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) 
    {
        string s;
        preorder(root,s);
        return vec;
    }
};



