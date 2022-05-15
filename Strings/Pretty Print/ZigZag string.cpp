string Solution::convert(string A, int B) {
if(B==1)return A;
string s="";
int n=A.size(),increment=2*(B-1);
for(int i=0;i<B;i++)
{
    for(int j=i;j<n;j+=increment)
    {
        s+=A[j];
        if(i>0 && i<B-1 && j+increment -2*i < n)s+=A[j+increment-2*i];
    }
}
return s;
}
