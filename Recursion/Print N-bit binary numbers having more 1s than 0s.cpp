class Solution{
public:	
    vector<string> vec;
    void recursion(int N,int count,string s)
    {
        if(count==N)
        {
            int num_1=0,num_0=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='1'){num_1++;}
                else{num_0++;}
                if(num_0>num_1){return;}//very very important as for any prefix of binary number it should has less number of 0's than 1 
            }
            if(num_0<=num_1){vec.push_back(s);}
            return;
        }
        recursion(N,count+1,s+"1");
        recursion(N,count+1,s+"0");
    }
	vector<string> NBitBinary(int N)
	{
	    string g="1";
	    recursion(N,1,g);
	    return vec;
	}
};
