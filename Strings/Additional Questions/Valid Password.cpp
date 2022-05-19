int Solution::solve(string A) {
    int flagnum=0,flaglen=0,flaglow=0,flagup=0,flagspl=0;
    
    if(A.size()<=15 && A.size()>=8)flaglen=1;
    else return 0;
    
    for(int i=0;i<A.size();i++)
    {
        if(A[i]<='0'+9 && A[i]>='0')flagnum=1;
        if(A[i]<='A'+25 && A[i]>='A')flagup=1;
        if(A[i]<='a'+25 && A[i]>='a')flaglow=1;
        if(A[i]=='@' || A[i]=='#' || A[i]=='%' || A[i]=='&' || A[i]=='!' || A[i]=='$' || A[i]=='*' )flagspl=1;
        
    }

    if(flagnum==1 & flaglen==1 && flaglow==1 && flagup==1 && flagspl==1)return 1;
    else return 0;
}

