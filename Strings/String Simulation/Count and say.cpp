string Solution::countAndSay(int A) {

    int n=A;
    if(n<=0)return "";

    string s="1";
    while(n>1)
    {
        string temp;
        for(int i=0;i<s.size();i++)
        {
            int count=1;
            
            while(s[i]==s[i+1] && i+1<s.size())
            {
                count++;
                i++;
            }
            temp=temp+to_string(count)+s[i];
        }
        s=temp;
        n--;
    }


    return s;
}
