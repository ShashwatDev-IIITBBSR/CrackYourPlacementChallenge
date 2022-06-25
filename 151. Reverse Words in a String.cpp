class Solution {
public:
    string reverseWords(string s) 
    {
        vector<string>vec;
        string final_str="";
        int l=s.size();
        if(l<2){return s;}
        int i=0;
        int last=0;
        while(true)
        {
            if(i==l||s[i]==' ')
            {
                if(i!=0){vec.push_back(s.substr(last,i-last));}
                while(i<l&&s[i]==' ') i++;
                last=i;
                if(i==l)break;
                continue;
            }
            i++;
        }
        final_str=vec[vec.size()-1];
        for(i=vec.size()-2;i>=0;i--)
        {
            final_str=final_str+' '+vec[i];         
        }
        return final_str;
    }
};
//Others Solution
/*class Solution {
    public String reverseWords(String s) {
       Stack<String> st = new Stack<>();
       String temp = "";
       String ans  = "";
        
       for(int i =0; i <s.length(); i++){
          if(s.charAt(i) == ' '){ 
              if(temp.length() > 0)
               st.push(temp);             
              temp = "";
          }else
             temp = temp + s.charAt(i);
        }
        
        ans = ans + temp;
     
        while(!st.isEmpty()){
            ans = ans + " " + st.pop();
        }
      
        if(ans.length() != 0 && ans.charAt(0) == ' ')
          ans =  ans.substring(1);
        
        return ans;
    }
}*/