   int count=0;
   long long toh(int N, int from, int to, int aux) {
       // Your code here
        count++;
        if(N==1){
            cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
            return count;
        }
        toh(N-1,from,aux,to);
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
        toh(N-1,aux,to,from);
        return count;
   }