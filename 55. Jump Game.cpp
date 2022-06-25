/*Logic used here is that say for array [3,2,1,0,4] to reach target(ie 4th index in this case) we will check if 
3rd index has minimum value 1
2nd index has minimum value 2
1st has minimum value 3
0th has minimum value 4
We will use loop in reverse orderand as soon as first criteria is fulfilled we will call loop and change target index to that index.*/
class Solution {
public:
    bool Jump(vector<int> nums,int target_index)
    {
        int k=1,j;
        if(target_index==0){return true;}
        j=target_index-1;
        while(j>=0&&nums[j]>0)//Till there is any positive value (NOT ZERO) we can reach target index by moving 1 step at a time
        {
            j--;
        }
        target_index=j+1;
        if(target_index==0){return true;}
        for(int i=target_index-1;i>=0;i--)
        {
            if(nums[i]>=k)
            {
                if(i==0){return true;}
                return Jump(nums,i);
            }
            k++;
        }
        return false;
    } 
   bool canJump(vector<int>& nums) 
    {
       if(nums[0]>=nums.size()-1){return true;}//For some very Extreme Edge Cases. If first number has index greater than or equal to last index we can directly reach last.
       return Jump(nums,nums.size()-1);
        
    }
};
/*class Solution {
public:
     bool canJump(vector<int>& nums) 
    {
         reach=0;
         int i,target=nums.size()-1;
         for(i=0;i<nums.size()-2;i++)
         {
             reach=max(reach,i+nums[i]);//i+nums[i] gives max index upto which we can go
             if (reach>target)
             {
                 return true;
             }
             if(reach<=i)
             {
                 return false;
             }
         }
         return false;
     }
};
class Solution {
    public boolean canJump(int[] array) {
        int reach = 0;
        for (int i = 0; i <= reach; i++) {
            reach = Math.max(reach, i + array[i]);
            if (reach >= array.length - 1) {
                return true;
            }
        }
        return false;
    }
}*/

