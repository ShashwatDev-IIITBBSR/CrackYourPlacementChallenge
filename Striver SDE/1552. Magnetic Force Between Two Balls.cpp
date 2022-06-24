class Solution {
public:
    bool can_place_magnets(vector<int>& position, int m,int dist)
    {
        int temp=position[0];
        int length=position.size();
        int count_placed=1;
        for(int i=1;i<length;i++)
        {
            if((position[i]-temp)>=dist)
            {
                temp=position[i];
                count_placed++;
            }
            if(count_placed==m)
            {
                return true;
            }
        }
        return false;
    }   
    int maxDistance(vector<int>& position, int m) 
    {
        int l,low,high,mid;
        sort(position.begin(),position.end());
        l=position.size();
        low=1;
        high=position[l-1]-position[0];
        int last;
        while(low<=high)
        {
            mid=(high+low)/2;
            if(can_place_magnets(position,m,mid))
            {
                low=mid+1;
                last=mid;
            }
            else
            {
                high=mid-1;
            }
        }
        return last;
    }
};








