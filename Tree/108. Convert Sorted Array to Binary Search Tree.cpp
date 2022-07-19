 */
class Solution {
public:
    TreeNode* BST(vector<int>& nums,int start,int end) 
    {
        int n=end-start+1,mid=(start+end)/2;
        TreeNode *t=new TreeNode;
        t->val=nums[mid];
        if(n==1)
        {
            t->right=NULL;
            t->left=NULL;
        }
        else if(n==2)
        {
            t->left=NULL;
            t->right=BST(nums,start+1,end);
        }
        else
        {
            t->left=BST(nums,start,mid-1);
            t->right=BST(nums,mid+1,end);            
        }
        return t;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        return BST(nums,0,nums.size()-1);     
    }
};

//Method 2
class Solution {
public:
    TreeNode* BST(vector<int>& nums,int start,int end) 
    {
        if(start>end)
        {
            return NULL;
        }
        else
        {
            int mid=(start+end)/2;
            TreeNode *t=new TreeNode;
            t->val=nums[mid];
            t->left=BST(nums,start,mid-1);
            t->right=BST(nums,mid+1,end); 
            return t;
        }
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        return BST(nums,0,nums.size()-1);     
    }
};