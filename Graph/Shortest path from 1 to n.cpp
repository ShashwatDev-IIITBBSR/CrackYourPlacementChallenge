/*Consider a directed graph whose vertices are numbered from 1 to n. 
There is an edge from a vertex i to a vertex j iff either j = i + 1 or j = 3 * i. 
The task is to find the minimum number of edges in a path in G from vertex 1 to vertex n.*/
class Solution{   
public:
    int minimumStep(int n)
    {
        int count=0;
        while(n!=1)
        {
            if(n%3==0)
            {
                n=n/3;
            }
            else 
            {
                n=n-1;
            }
            count++;
        }
        return count;
    }
};
