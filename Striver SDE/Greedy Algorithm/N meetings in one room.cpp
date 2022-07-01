class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    
    struct meeting
    {
        int start;
        int end;
        int pos;
    };
    bool static comparator(struct meeting t1,struct meeting t2)
    {
        if(t1.end<t2.end){return true;}
        else if(t2.end<t1.end){return false;}
        else if(t1.pos<t2.pos){return true;}
        else{return false;}
    }
    int maxMeetings(int start[], int end[], int n)
    {
        int i=0;
    	struct meeting meet[n];
    	for(i=0;i<n;i++)
    	{
    	    meet[i].start=start[i];
    	    meet[i].end=end[i];
    	    meet[i].pos=i+1;
    	}
    	
    	sort(meet,meet+n,comparator);
    	
    	int count=0;
    	int last_end=-1;
    	for(i=0;i<n;i++)
    	{
    	    if(meet[i].start>last_end)
    	    {
    	        count++;
    	        last_end=meet[i].end;
    	    }
    	}
        return count;
    }
};

