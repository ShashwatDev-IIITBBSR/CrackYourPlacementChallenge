class Solution {
public:
    void zig_zag_levelorder(vector<vector<int>> &v, deque<TreeNode*> dq,int level)
    { 
        deque<TreeNode*> d;
        TreeNode *n;
        vector<int> temp;
        if(dq.empty()){return;}
        while(!dq.empty())
        {
            n=dq.front();
            dq.pop_front();
            if(n->left!=NULL){d.push_back(n->left);}
            if(n->right!=NULL){d.push_back(n->right);}
            temp.push_back(n->val);
        }
        if(level%2!=0)
        {
            reverse(temp.begin(),temp.end());
        }
        v.push_back(temp);
        zig_zag_levelorder(v,d,level+1);
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        vector<vector<int>> v;
        deque<TreeNode*> dq;
        if(!root){return v;};
        dq.push_back(root);
        zig_zag_levelorder(v,dq,0);
        return v;
    }
};
