class Solution {
public:
    /*long int mat[46];
    long int climb(int i)
    {
        if(mat[i]!=-1){return mat[i];}
        else
        {
            long int l,r;
            if(mat[i-1]!=-1){l=mat[i-1];}
            else{l=climb(i-1);}
            if(mat[i-2]!=-1){r=mat[i-2];}
            else{r=climb(i-2);}           
            return l+r;
        }
    }
    int climbStairs(int n) 
    {
        memset(mat,-1,sizeof(mat));
        mat[0]=0;
        mat[1]=1;
        mat[2]=2;
        return climb(n);
        //return INT_MAX;
    }*/
    int climbStairs(int n) 
    {
        if(n<=2)
        return n;
    int a[n];
    a[0] = 1;
    a[1] = 2;
    for(int i=2;i<n;i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    return a[n-1];
        /*int x,y,z;
        y=1;
        z=2;
        if(n<=2){return n;}
        for(int i=0;i<n-2;i++)
        {
            x=y+z;
            y=z;
            z=x;
        }
        return x;*/
    }            
};