int Solution::uniquePaths(int N, int M) {
    int n=N+M-2;
    int r=M-1;
    long long ans=1;
    for(int i=1;i<=r;i++)
    {
        ans=ans*(n-r+i)/i;
    }
    return ans;
}
