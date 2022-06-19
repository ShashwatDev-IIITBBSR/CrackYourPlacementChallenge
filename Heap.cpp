#include <iostream>
using namespace std;
struct MinHeap
{
    int *arr;
    int max_size;
    int curr_size;
    MinHeap(int c,int k)
    {
        arr=new int[c];
        max_size=c;
        curr_size=k;
    }
    void input_heap(int element,int index)
    {
        arr[index]=element;
    }
    void print_heap()
    {
        for(int i=0;i<curr_size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    int right_child(int a)
    {
        return 2*a+2;
    }
    int left_child(int a)
    {
        return 2*a+1;
    }
    int parent(int a)
    {
        return (a-1)/2;
    }
    void swap(int a, int b)
    {
        int k;
        k=arr[a];
        arr[a]=arr[b];
        arr[b]=k;
    }
    void insert(int a)
    {
        arr[curr_size]=a;
        int i=curr_size;
        curr_size++;
        while(i!=0&&(arr[parent(i)]>arr[i]))
        {
            swap(parent(i),i);
            i=parent(i);
        }
    }
};
void heapify(MinHeap &m,int index)
{
    int lc,rc;
    lc=m.left_child(index);
    rc=m.right_child(index);
    if(m.arr[index]<m.arr[m.left_child(index)]&&m.arr[index]<m.arr[m.right_child(index)])
    {
        return;
    }
    if(rc>m.curr_size){return;}
    if(rc==m.curr_size)
    {
        if(m.arr[lc]<m.arr[index])
        {
            m.swap(lc,index);
        }
        return;
    }
    if(m.arr[lc]<m.arr[rc]&&m.arr[index]>lc)
    {
        m.swap(index,lc);
        heapify(m,lc);
    }
    else if(m.arr[lc]>m.arr[rc]&&m.arr[index]>rc)
    {
        m.swap(index,rc);
        heapify(m,rc);
    }
}
void extract_min(MinHeap &m)
{
    m.arr[0]=m.arr[m.curr_size-1];
    m.curr_size--;
    heapify(m,0);
}
int get_min(MinHeap m)
{
    return m.arr[0];
}
void replace(MinHeap &m,int index,int element)//replace an element
{
    m.arr[index]=element;
    int i=index;
    while((i!=0)&&(m.arr[m.parent(i)]>m.arr[i]))
    {
        int k=m.parent(i);
        m.swap(k,i);
        i=m.parent(i);
    }
}
void delete_key(MinHeap &m,int index)
{
    replace(m,index,-1);
    extract_min(m);
}
int main()
{
    int s,k,i,n;
    cout<<"Enter max size of heap ";
    cin>>s;
    cout<<"Enter Number of elements in heap ";
    cin>>n;
    MinHeap m(s,n);
    for(i=0;i<n;i++)
    {
        cout<<"Enter "<<i<<" element ";
        cin>>k;
        m.input_heap(k,i);
    }
    m.print_heap();
    cout<<endl;
    heapify(m,0);
    m.print_heap();
    cout<<endl;
    cout<<"Minimum value is "<<get_min(m);
    extract_min(m);
    cout<<endl;
    m.print_heap();
    cout<<endl;
    replace(m,5,0);
    m.print_heap();
    cout<<endl;
    delete_key(m,4);
    m.print_heap();
    return 0;
}
