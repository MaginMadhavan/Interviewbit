int Solution::strStr(const string A, const string B) {

    int n=A.size(),m=B.size();
    if(A[0]=='/0' || B[0]=='/0')return -1;
    if(n<m)return -1;
 
    for(int i=0;i<=n-m;++i)
    {   
        int j;
        for( j=0;j<B.size();++j)
        {
            if(A[i+j]!=B[j])break;
        }
        if(j==m)return i;      
    }

    return -1;
}
