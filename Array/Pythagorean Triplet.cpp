int Solution::solve(int A) {
    int count=0;
    for(int i=1;i<=A;i++)
    {
        for(int j=i;j<=A;j++)
        {
            for(int k=j;k<=A;k++)
            {
                if(i*i+j*j==k*k)count++;
            }
        }
    }
    return count;
}
