class Solution {
public:
    unordered_map<int,int>umap;
    void preorder(TreeNode *root)
    {
        if(!root){return;}
        umap[root->val]++;
        preorder(root->left);
        preorder(root->right);
    }
    vector<int> findMode(TreeNode* root) 
    {
        vector<int>vec;
        int maxi=0;
        preorder(root);
        for(auto x:umap)
        {
            if(x.second>maxi)
            {
                vec.clear();
                vec.push_back(x.first);
                maxi=x.second;
            }
            else if(x.second==maxi)
            {
                vec.push_back(x.first);
            }
        }
        return vec;
    }
};
