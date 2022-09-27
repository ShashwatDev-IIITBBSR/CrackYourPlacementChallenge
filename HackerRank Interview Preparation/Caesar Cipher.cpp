string caesarCipher(string s, int k) 
{
    /*string str;
    while(k>=26){k=k-26;}
    if(k==0){return s;}
    for(int i=0;i<s.size();i++)
    {
        char c=s[i];
        if(!((s[i]>=65&&s[i]<=90)||(c>=97&&c<=122)))
        {
            str+=c;
            continue;
        }
        if(s[i]>=65&&s[i]<=90)
        {
            char p=c+k;
            if(p<=90)
            {
                str+=p;
            }
            else
            {
                str+=p-26;
            }
        }
        else
        {
            char p=c+k;
            if(p<=122)
            {
                str+=p;
            }
            else
            {
                str+=p-26;
            }
        }        
    }
    return str;*/
    k=k%26;
    for (int i = 0; i < s.length(); i++)
    {
        char current = s[i];
        int conversion = current;

        if (conversion >= 'a' && conversion <= 'z'){
            conversion += k;
            if (conversion > 'z'){
                conversion -= 26;
            }

        }
    else if (conversion >= 'A' && conversion <= 'Z'){
        conversion += k;
        if (conversion > 'Z'){
            conversion -= 26;
            }
        }
    current = conversion;
    s[i] = current;
    }
    return s;
}
