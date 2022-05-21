int Solution::hammingDistance(const vector<int> &A) {
long long int n=A.size();
long long int ans=0;

for(int i=0;i<32;i++)

{   
    int count=0;
    for(int j=0;j<n;j++)
    {
        if((A[j]&(1<<i))==0)count++;
    }
    ans+=(count*(n-count)*2);
}

return ans%1000000007;


}

