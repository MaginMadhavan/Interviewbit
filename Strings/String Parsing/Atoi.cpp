int Solution::atoi(const string A) {
    int n=A.size(), temp , i=0 , flag=1;
    long long  res=0;
   
 
if(A[0]=='-' && A[i+1]>='0' && A[i+1]<='9'){flag=-1;i++;}
else if(A[0]=='+' && A[i+1]>='0' && A[i+1]<='9'){i++;}

    for(;i<n;i++)
    {   
        if(res==INT_MAX)break;
        if(A[i]>='0' && A[i]<='9'){
            temp=A[i]-'0';
            if(res*10>INT_MAX){res=INT_MAX;break;}
            else 
            res=res*10 + temp;
        }

        else break;
    }



if(res>=INT_MAX){
    if(flag==1)return INT_MAX;
    else return INT_MIN;
}
return res*flag;
}
