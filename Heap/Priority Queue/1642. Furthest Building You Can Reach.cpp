class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int i=0;
        priority_queue<int> pq;
        for(i=0;i<heights.size()-1;i++){
            int diff = heights[i+1] - heights[i];
            if(diff <= 0){
                continue;
            } 
            else {
                if(diff <= bricks){
                    bricks -= diff;
                    pq.push(diff);
                } 
                else if(ladders > 0)
                    {
                    if(pq.size()){
                        int currMaxBricks = pq.top();
                        if(currMaxBricks > diff){
                            bricks += currMaxBricks;
                            pq.pop();
                            pq.push(diff);
                            bricks -= diff;
                        }    
                    }
                    ladders--;
                } else {
                    return i;
                }
            }
        }
        return i;
    }
};
