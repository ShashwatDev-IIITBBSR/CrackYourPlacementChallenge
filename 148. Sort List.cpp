class Solution {
public:
    void merge(vector<int> &vec,int start1,int end1,int start2,int end2)
    {
        int l1=1+end1-start1,l2=1+end2-start2;
        vector<int> vec1(l1,0),vec2(l2,0);
        int j=0,k=0;
        for(int i=start1;i<=end1;i++)
        {
            vec1[j]=vec[i];
            j++;
        }
        for(int i=start2;i<=end2;i++)
        {
            vec2[k]=vec[i];
            k++;
        }
        int i=start1;
        int c1=0,c2=0;        
        while((c1<l1)&&(c2<l2))
        {
            if(vec1[c1]<=vec2[c2])
            {
                vec[i]=vec1[c1];
                i++;
                c1++;
            }
            else
            {
                vec[i]=vec2[c2];
                i++;
                c2++;
            }
        }
        if(c1>=l1)
        {
            while(c2<l2)
            {
                vec[i]=vec2[c2];
                i++;
                c2++;
            }
        }
        else
        {
            while(c1<l1)
            {
                vec[i]=vec1[c1];
                i++;
                c1++;
            }
        }
    }
    void merge_sort(vector<int> &vec,int start,int end)
    {
        int mid=(start+end)/2;
        if(start<end)
        {
            merge_sort(vec,start,mid);
            merge_sort(vec,mid+1,end);
            merge(vec,start,mid,mid+1,end);
        }
    }
    ListNode* sortList(ListNode* head) 
    {
        vector<int> vec;
        int length=0;
        ListNode* temp=head;
        while(temp)
        {
            vec.push_back(temp->val);
            temp=temp->next;
            length++;
        }
        merge_sort(vec,0,length-1);
        int i=0;
        temp=head;
        while(i<length)
        {
            temp->val=vec[i];
            temp=temp->next;
            i++;
        }
        return head;
    }

};           
      