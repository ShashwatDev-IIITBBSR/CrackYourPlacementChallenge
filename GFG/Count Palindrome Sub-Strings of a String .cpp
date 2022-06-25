bool palindrome(char S[],int start,int end)
{
    int e=end,s=start;
    while(s<e)
    {
        if(S[s]!=S[e]){return false;}
        s++;
        e--;
    }
    return true;
}
int CountPS(char S[], int N)
{
    int count=0;
    for(int i=0;i<N-1;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(S[i]==S[j]) if(palindrome(S,i,j)) count++;
        }
    }
    return count;
    
}