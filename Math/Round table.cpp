int Solution::solve(int A) {
     long long int ans=2;
    if(A==1)return 2;
    for(int i=A;i>0;i--)
    {
        ans*=i;
        ans%=1000000007;
    }
    
    return ans;

}
