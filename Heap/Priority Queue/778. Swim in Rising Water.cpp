//In order to avoid pushing same boxes in priority_queue, we can change it's value to say something like INT_MAX. 
//By doing so we won't have to use unordered sets.

class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) 
    {     
        priority_queue<pair<int,vector<int>>, vector<pair<int,vector<int>>>,           greater<pair<int,vector<int>>>> pq;
        pair<int,vector<int>>p;
        unordered_set<int>uset;
        vector<int>v(2);
        int i=0,r=0,c=0;
        int num_rows=grid.size(),num_col=grid[0].size();
        v[0]=0;
        v[1]=0;
        p.first=grid[0][0];
        p.second=v;
        pq.push(p);
        uset.insert(grid[0][0]);
        while(true)
        {
            while(!pq.empty()&&pq.top().first<=i)
            {
                r=pq.top().second[0];
                c=pq.top().second[1];
                pq.pop();
                if(r==num_rows-1&&c==num_col-1){return i;}
                //Inserting neighbouring elements in queue
                if(r<num_rows-1 &&(!(uset.find(grid[r+1][c])!=uset.end())))
                {
                   v[0]=r+1;
                    v[1]=c;
                    p.first=grid[r+1][c];
                    p.second=v;
                    pq.push(p);
                    uset.insert(grid[r+1][c]);
                }
                if(c<num_col-1 &&(!(uset.find(grid[r][c+1])!=uset.end())))
                {
                    v[0]=r;
                    v[1]=c+1;
                    p.first=grid[r][c+1];
                    p.second=v;
                    pq.push(p);
                    uset.insert(grid[r][c+1]);
                }  
                if(r>0 &&(!(uset.find(grid[r-1][c])!=uset.end())))
                {
                   v[0]=r-1;
                    v[1]=c;
                    p.first=grid[r-1][c];
                    p.second=v;
                    pq.push(p);
                    uset.insert(grid[r-1][c]);
                }
                if(c>0 &&(!(uset.find(grid[r][c-1])!=uset.end())))
                {
                    v[0]=r;
                    v[1]=c-1;
                    p.first=grid[r][c-1];
                    p.second=v;
                    pq.push(p);
                    uset.insert(grid[r][c-1]);
                }               
            }
            i++;
        }
        return 0;
    }
};

