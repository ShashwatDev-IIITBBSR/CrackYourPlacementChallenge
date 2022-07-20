/*class Solution {
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
};*/

class Solution {
public:

vector<vector<int>>res;
void spiral_order(vector<TreeNode*>q,int level)
{
    if(q.empty()){return;}
    vector<TreeNode*>temp;
    vector<int>vec;
    if(level%2==0)
    {
        for(int i=q.size()-1;i>=0;i--)
        {
            vec.push_back(q[i]->val);
        }
        for(int i=0;i<q.size();i++)
        {
            if(q[i]->left){temp.push_back(q[i]->left);}
            if(q[i]->right){temp.push_back(q[i]->right);}
        }        
    }
    else
    {
        for(int i=0;i<q.size();i++)
        {
            vec.push_back(q[i]->val);
            if(q[i]->left){temp.push_back(q[i]->left);}
            if(q[i]->right){temp.push_back(q[i]->right);}
        }
   } 
    res.push_back(vec);
    spiral_order(temp,level+1);
}

vector<vector<int>> zigzagLevelOrder(TreeNode *root)
{
    if(!root){return res;}
    vector<TreeNode*>q;
    q.push_back(root);
    spiral_order(q,1);
    return res;
}
};
