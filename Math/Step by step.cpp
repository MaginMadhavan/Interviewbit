int Solution::solve(int A) {

    int ans=0;

A=abs(A);
if(A==0)return 0;
for(int i=0;i<A;i++)
{
    ans+=i;
    if(ans>=A && (ans-A)%2==0)return i;
}
}
