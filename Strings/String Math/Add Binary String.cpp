string Solution::addBinary(string A, string B) {

    int len1=A.size() , len2=B.size();
    int carry=0 , i=len1-1, j=len2-1, maxlen=max(len1,len2);

    string sum="";
    
    for( ;maxlen>0;i--,j--,maxlen--)
    {
        int temp=carry;
        if(i>=0)temp+=A[i]-'0';
        if(j>=0)temp+=B[j]-'0';

        if(temp==0){carry=0;}
        else if (temp==1){carry=0;}
        else if(temp==2){carry=1;temp=0;}
        else if(temp==3){carry=1;temp=1;}

        sum=to_string(temp)+sum;   
    }

    if(carry==1)sum=to_string(carry)+sum;
    
    return sum;
}
