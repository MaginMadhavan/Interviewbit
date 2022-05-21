int Solution::isPower(int A) {
    int p;
    if(A==1)return true;
    
    for(int i=2;i<=sqrt(A);i++)
    {
        p=log(A)/log(i);
        if(pow(i,p)==A)return true;
        
    }
return false;
    
}
