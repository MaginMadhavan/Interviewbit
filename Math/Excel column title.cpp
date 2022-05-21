string Solution::convertToTitle(int A) {

    int temp=A;
    string s="";

    int i=0;
    int rem;

    while(temp>0)
    {
        rem=temp%26;
        if(rem==0)
        {
            s='Z'+s;
            temp=(temp/26)-1;
        }
        else{
        char c='A'+rem-1;
        s=c+s;
        temp/=26;
        }
    }
return s;
}

