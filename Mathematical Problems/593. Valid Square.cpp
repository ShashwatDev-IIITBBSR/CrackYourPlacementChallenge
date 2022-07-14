class Solution {
public:
    long long length(vector<int> p1, vector<int> p2)
    {
        long long dist=(p1[0]-p2[0])*(p1[0]-p2[0])+(p1[1]-p2[1])*(p1[1]-p2[1]);
        return dist;
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) 
    {
        long long diag1_len,diag2_len,side1,side2,side3,side4;
        diag1_len=length(p1,p2);
        diag2_len=length(p3,p4);
        if(diag1_len!=diag2_len){return false;}
        side1=length(p4,p1);
        side2=length(p2,p3);
        side3=length(p2,p4);
        side4=length(p3,p1);
        if((side1==0) ||(side2==0) ||(side3==0) || (diag1_len==0) || (diag2_len==0)){return false;}
        if(side1!=side2){return false;}
        if(side3!=side1 && side1!=diag1_len && diag1_len!=side3){return false;}
        if(side4!=side1 && side1!=diag2_len && diag2_len!=side4){return false;}
        return true;
    }
};