vector<vector<int> > vec;
    map<vector<int>,int>umap;
    void recursion(vector<int>arr,int i,int n,vector<int> temp)
    {
        if(i==n)
        {
            if(umap[temp]==0)
            { vec.push_back(temp);
            umap[temp]=1;}
            return;
        }
        //recursion(arr,i+1,n,temp);
        temp.push_back(arr[i]);
        recursion(arr,i+1,n,temp);
        temp.pop_back();
        recursion(arr,i+1,n,temp);
    }
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        sort(arr.begin(),arr.end());
        vector<int> t;
        recursion(arr,0,n,t);
        sort(vec.begin(),vec.end());
        return vec;
    }






    
    void sol(int i,vector<vector<int> >&v,vector<int>&vec,vector<int> &arr,map<vector<int>,int>&m)
   {
       if(i==arr.size())
       {
           if(m[vec]==0)
           {
           v.push_back(vec);
           m[vec]++;
           }
           return;
           
       }
       vec.push_back(arr[i]);
       sol(i+1,v,vec,arr,m);
       vec.pop_back();
       sol(i+1,v,vec,arr,m);
       
       
   }
   //Function to find all possible unique subsets.
   vector<vector<int> > AllSubsets(vector<int> arr, int n)
   {
       // code here 
       vector<vector<int> >v;
       vector<int>vec;
       map<vector<int>,int>m;
       sort(arr.begin(),arr.end());
       sol(0,v,vec,arr,m);
       sort(v.begin(),v.end());
       
       return v;
   }