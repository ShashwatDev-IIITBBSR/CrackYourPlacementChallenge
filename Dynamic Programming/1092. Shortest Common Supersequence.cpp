class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) 
    {
        int n=str1.size(),m=str2.size();
        int i,j,mat[n+1][m+1];
        for(i=0;i<n+1;i++)
        {
            for(j=0;j<m+1;j++)
            {
                if(i==0||j==0){mat[i][j]=0;}
                else if(str1[i-1]==str2[j-1])
                {
                    mat[i][j]=1+mat[i-1][j-1];
                }
                else
                {
                    mat[i][j]=max(mat[i][j-1],mat[i-1][j]);
                }
            }
        }
        i=n;j=m;
        string a;
        while(mat[i][j]!=0)
        {
            if(str1[i-1]==str2[j-1])
            {
                a.push_back(str1[i-1]);
                i--;
                j--;
            }
            else
            {
                if(mat[i-1][j]>mat[i][j-1]){i--;}
                else{j--;}
            }
        }
        reverse(a.begin(),a.end());
        //so string a is longest common subsequence. Now we will find shortest common subsequence
        i=0;j=0;
        int z,k=0;
        z=a.size();
        string res;
        while(true)
        {
            if(k==z)//this also handles the case for i==n or j==m as k is common subsequence to both
            {
                while(i<n){res.push_back(str1[i]);i++;}
                while(j<m){res.push_back(str2[j]);j++;}  
                break;
            }
            if(str1[i]!=a[k])
            {
                res.push_back(str1[i]);
                i++;
            }
            else if(str2[j]!=a[k])
            {
                res.push_back(str2[j]);
                j++;                
            }
            else 
            {
                res.push_back(str1[i]);
                i++;
                j++;
                k++;
            }                    
            /*if(str1[i]!=a[k]&&str2[j]!=a[k])
            {
                res.push_back(str1[i]);
                i++;
            }
            else if(str1[i]!=a[k]&&str2[j]==a[k])
            {
                res.push_back(str1[i]);
                i++;                
            }
            else if(str1[i]==a[k]&&str2[j]==a[k])
            {
                res.push_back(str1[i]);
                i++;
                j++;
                k++;
            }           
            else
            {
                res.push_back(str2[j]);
                j++;
            }*/
        }        
        return res;
    }
};