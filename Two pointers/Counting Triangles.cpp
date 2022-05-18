int Solution::nTriang(vector<int> &A) {
    sort(A.begin(),A.end());
    int n=A.size();
    long long int count=0;
    long long int mod=1000000007;
    for(int k=n-1;k>=2;k--)
    {
        int i=0,j=k-1;
        while(i<j)
        {
            if(A[j]<=A[k]-A[i]){i++;continue;}
            count+=j-i;
            count%=mod;
            j--;
        }
    }
    int ans=count%mod;
    return count%mod;
}
