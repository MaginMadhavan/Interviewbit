int Solution::solve(int A) {
int ans=A;
int B;
if(ans<10)return ans;
    while(ans>=10)
    {
        B=ans;
        ans=0;
        while(B>0)
        {
            ans=ans+B%10;
            B/=10;
        }
    }
    return ans;
}
