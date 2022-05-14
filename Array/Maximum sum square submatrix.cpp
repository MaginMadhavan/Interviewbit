int Solution::solve(vector<vector<int> > &A, int B) {
    long int i,j,k,c,m;
    for(i=0;i<A.size();i++)
    {
        for(j=1;j<A.size();j++)
        {
         A[i][j]=A[i][j]+A[i][j-1];   
        }
    }
    m=INT_MIN;
    for(j=0;j<=A.size()-B;j++)
    {
        c=0;
        for(k=0;k<B;k++)
        {
            c=c+A[k][j+B-1];
            if(j-1>=0)
            {
            c=c-A[k][j-1];
            }
        }
        m=max(c,m);
        for(i=1;i<=A.size()-B;i++)
        {
            c=c+A[i+B-1][j+B-1];
            if (j-1>=0)
            {
                c=c-A[i+B-1][j-1];
            }
            if(i-1>=0)
            {
                c=c-A[i-1][j+B-1];
            }
            if(j-1>=0&&i-1>=0)
            {
                c=c+A[i-1][j-1];
            }
            m=max(c,m);
        }
    }
    return m;
}
