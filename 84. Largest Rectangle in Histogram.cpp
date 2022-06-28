
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) 
      {
        stack<int>st;
        int n=heights.size();
        vector<int> next_smaller(n);
        vector<int> last_smaller(n);
        int max_area=0,area;
        for(int i=0;i<n;i++)//finding out last smaller element for each index
        {
            if(st.empty())
            {
                last_smaller[i]=-1;
                st.push(i);
                continue;
            }
            while(!st.empty()&&heights[st.top()]>=heights[i])//Every greater element is popped
            {
                st.pop();
            }
            if(st.empty())
            {
                last_smaller[i]=-1;
            }
            else
            {
                last_smaller[i]=st.top();
            }
            st.push(i);
        }
        for(int i=0;i<n;i++)//finding out next smaller element for each index
        {
            if(st.empty())
            {
                st.push(i);
                continue;
            }
            while(!st.empty()&& heights[st.top()]>=heights[i])
            {
                next_smaller[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty())
        {
            next_smaller[st.top()]=n;
            st.pop();            
        }
        for(int i=0;i<n;i++)
        {
            area=heights[i]*(next_smaller[i]-last_smaller[i]-1);
            if(area>max_area){max_area=area;}
        }
        return max_area;  
    }
};
/*We will find next and last smaller element for each index and that save that element's index in Next and last smaller vector.
Example -Vector A [6,2,5,4,5,1,6]
Last smaller-[-1,-1,2,5,4,5,1,6]
Next Smaller-[1,5,3,5,5,7,7]
And area at each index=A[i]*(LastSmaller[i]-nextsmaller[i]-1)*/