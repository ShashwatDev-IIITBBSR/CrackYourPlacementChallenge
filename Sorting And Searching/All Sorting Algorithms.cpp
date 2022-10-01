#include <iostream>
#include <vector>
using namespace std;
void bubblesort(vector<int>&vec)
{
    int n=vec.size(),flag;
    for(int i=0;i<n-1;i++)
    {
        flag=0;
        for(int j=1;j<n-i;j++)
        {
            if(vec[j-1]>vec[j]){swap(vec[j-1],vec[j]);flag++;}
        }
        if(flag==0){break;}//Already sorted
    }
}
void insertionsort(vector<int>&vec)
{
    int n=vec.size();
    for(int i=1;i<n;i++)
    {
        int j=i;
        while(j!=0&&vec[j]<vec[j-1])
        {
            swap(vec[j],vec[j-1]);
            j--;
        }
    }
}
void selectionsort(vector<int>&vec)
{
    int n=vec.size();
    for(int i=0;i<n-1;i++)
    {
        int mini=i;
        for(int j=i+1;j<n;j++)
        {
            if(vec[mini]>vec[j]){mini=j;}
        }
        swap(vec[i],vec[mini]);
    }
}
void countsort(vector<int>&vec)
{
    int maxi=vec[0];
    for(auto x:vec)
    {
        maxi=max(maxi,x);
    }
    vector<int>res(maxi+1,0);
    for(auto x:vec)
    {
        res[x]++;
    }
    int j=0;
    for(int i=0;i<=maxi;i++)
    {
        if(res[i]==0){continue;}
        while(res[i]>0)
        {
            vec[j]=i;
            j++;
            res[i]--;
        }
    }
}
int getMax(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}
 
// A function to do counting sort of arr[] according to
// the digit represented by exp.
void countSort(int arr[], int n, int exp)
{
    int output[n]; // output array
    int i, count[10] = { 0 };
 
    // Store count of occurrences in count[]
    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;
 
    // Change count[i] so that count[i] now contains actual
    //  position of this digit in output[]
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
 
    // Build the output array
    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
 
    // Copy the output array to arr[], so that arr[] now
    // contains sorted numbers according to current digit
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}
 
// The main function to that sorts arr[] of size n using
// Radix Sort
void radixsort(int arr[], int n)
{
    // Find the maximum number to know number of digits
    int m = getMax(arr, n);
 
    // Do counting sort for every digit. Note that instead
    // of passing digit number, exp is passed. exp is 10^i
    // where i is current digit number
    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n, exp);
}
 
void display(vector<int>&vec)
{
    int n=vec.size();
    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }    
}
int main()
{
    int s;
    cout<<"Enter size of vector ";
    cin>>s;
    vector<int>vec;
    for(int i=1;i<=s;i++)
    {
        int k;
        cout<<"Enter "<<i<<" element ";
        cin>>k;
        vec.push_back(k);
    }
    //bubblesort(vec);
    countsort(vec);
    display(vec);
    return 0;
}