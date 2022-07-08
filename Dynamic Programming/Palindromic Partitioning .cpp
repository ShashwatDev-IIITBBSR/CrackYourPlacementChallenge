
int mat[501][501];
class Solution{
public:
bool ispalindrome(string s,int a, int b)
{
    while(a<b&&s[a]==s[b]){a++;b--;}
    if(a>=b){return 1;}
    return 0;
}
    
    int solve(string s,int i,int j)
    {
        if(mat[i][j]!=-1){return mat[i][j];}
        if(i>=j){return 0;}
        int temp,left,right;
        if(ispalindrome(s,i,j)==1){return 0;}
        int min_val=INT_MAX;
        for(int k=i;k<j;k++)
        {
            if(mat[i][k]!=-1){left=mat[i][k];}
            else{left=solve(s,i,k);}
            if(mat[k+1][j]!=-1){right=mat[k+1][j];}
            else{right=solve(s,k+1,j);}            
            temp=left+right+1;
            min_val=min(min_val,temp);
        }
        return mat[i][j]=min_val;
    }
    int palindromicPartition(string str)
    {
        memset(mat,-1,sizeof(mat));
        return solve(str,0,str.size()-1);
    }
};