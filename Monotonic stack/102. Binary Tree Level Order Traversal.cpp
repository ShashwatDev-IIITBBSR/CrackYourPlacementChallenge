class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) 
    {   vector<int> level;
        vector<vector<int>> ans; 
        if(root == NULL) 
            return ans;      
        queue<TreeNode*> q; 
        q.push(root); 
        
        while(!q.empty()) 
        {
            int size=q.size();
            vector<int>level;
            for(int i=0;i<size;i++)
            {
            TreeNode *temp = q.front(); 
            q.pop();
            if(temp->left != NULL) 
                q.push(temp->left); 
            if(temp->right != NULL) 
                q.push(temp->right);   
            level.push_back(temp->val); 
            }
        ans.push_back(level); 
        }
     return ans;
    }
};