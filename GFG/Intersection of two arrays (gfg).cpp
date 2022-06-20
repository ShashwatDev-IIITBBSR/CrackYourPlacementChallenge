class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        int final_count=0,k;
        unordered_set<int> uset1,uset2;
        for(int i=0;i<n;i++)
        {
            k=a[i];
            uset1.insert(k);
        }
        for(int i=0;i<m;i++)
        {
            k=b[i];
            uset2.insert(k);
        }
        for(auto j=uset1.begin();j!=uset1.end();j++)
        {
            
            if(uset2.find(*j)!=uset2.end())
            {
                final_count++;
            }
        }
        return final_count;
    }
};

