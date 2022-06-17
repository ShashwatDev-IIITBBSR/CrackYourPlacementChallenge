class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) 
    {
        vector<int> vec;
        if(!root){return vec;}
        TreeNode*k;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty())
        {
            k=st.top();
            st.pop();
            if(k->right){st.push(k->right);}
            if(k->left){st.push(k->left);}
            vec.push_back(k->val);
        }
        return vec;
    }
};