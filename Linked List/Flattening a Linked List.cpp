Node *flatten(Node *root)
{
    Node *ans,*start,*t,*k,*temp;
   if(!root){return NULL;}
   priority_queue<int,vector<int>,greater<int>>pq;
   t=root;
   while(t)
   {
       k=t;
       while(k){pq.push(k->data);k=k->bottom;}
       t=t->next;
   }
   Node *z=new Node(pq.top());
   pq.pop();
   ans=start=z;
   while(!pq.empty())
   {
       Node *z=new Node(pq.top());
       //z->data=pq.top();
       pq.pop();
        ans->bottom=z;
        ans=z;
   }
   return start;
}
