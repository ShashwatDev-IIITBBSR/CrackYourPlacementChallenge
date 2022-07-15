//Using Binary Search on Whole matrix
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int n=matrix.size(),m=matrix[0].size();
        if(target<matrix[0][0]||target>matrix[n-1][m-1]){return false;}
        else if(target==matrix[0][0]){return true;}
        int low=0,high=m*n-1,mid;
        while(low<high)
        {
            mid=(low+high)/2;
            int r=mid/m,c=mid%m;
            if(matrix[r][c]==target){return true;}
            else if(matrix[r][c]>target){high=mid-1;}
            else{low=mid+1;}
        }
        if(matrix[low/m][low%m]==target){return true;}
        else{return false;}
    }
};
//Using Binary Search on first column of matrix to get desired row and then binary search on that row
/*class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int n=matrix.size(),m=matrix[0].size();
        if(target<matrix[0][0]||target>matrix[n-1][m-1]){return false;}
        else if(target==matrix[0][0]){return true;}
        int low=0,high=n-1,mid;
        if(target>=matrix[n-1][0]){low=high;}
        while(low<high)
        {
            mid=(low+high)/2;
            if(low==mid){break;}
            if(matrix[mid][0]==target){return true;}
            else if(matrix[mid][0]>target){high=mid;}
            else{low=mid;}
        }
        int row=low;
        high=m-1;
        low=0;
        if(matrix[row][high]==target||matrix[row][low]==target){return true;}
        while(low<high)
        {
            mid=(low+high)/2;
            if(low==mid){break;}
            if(matrix[row][mid]==target){return true;}
            else if(matrix[row][mid]>target){high=mid-1;}
            else{low=mid+1;}
        }
        if(matrix[row][low]==target){return true;}
        else{return false;}
    }
};*/