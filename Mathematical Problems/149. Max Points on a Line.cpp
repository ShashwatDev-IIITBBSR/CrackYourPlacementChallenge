//O(n*n) Solution
class Solution {
public:
    int maxPoints(vector<vector<int>>& points) 
    {
        int n=points.size(),i,j,k,c,maxi=0;
        unordered_map<float,int>umap;//slope's count
        if(n<3){return n;}
        for(i=0;i<n-1;i++)
        {
            umap.clear();
            int slope_infy=0;
            for(j=i+1;j<n;j++)
            {
                if((points[j][0]-points[i][0])==0){slope_infy++;maxi=max(maxi,slope_infy+1);}
                else
                {
                    float slope=(float)(points[j][1]-points[i][1])/(points[j][0]-points[i][0]);
                    umap[slope]++;
                    maxi=max(maxi,umap[slope]+1);
                }
            }
        }
        return maxi;
    }
};
//O(n*n*n) solution
/*class Solution {
public:
    bool iscollinear(vector<vector<int>> p,int i, int j,int k)
    {
        if((p[i][0]*(p[j][1]-p[k][1]))+(p[j][0]*(p[k][1]-p[i][1]))+(p[k][0]*(p[i][1]-p[j][1]))==0)//Area of triangle =0
        {
            return true;
        }
        return false;
    }
    int maxPoints(vector<vector<int>>& points) 
    {
        int n=points.size(),i,j,k,c,maxi=0;
        if(n<3){return n;}
        for(i=0;i<n-2;i++)
        {
            for(j=i+1;j<n-1;j++)
            {
                c=2;
                for(k=j+1;k<n;k++)
                {
                    if(iscollinear(points,i,j,k)){c++;}
                }
                maxi=max(c,maxi);
            }
        }
        return maxi;
    }
};*/