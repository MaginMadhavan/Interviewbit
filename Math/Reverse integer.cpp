int Solution::reverse(int B) {
    long long int A=abs(B);
    long long int rev=0;
while(A>0)
{
    rev=rev*10 + A%10;
    A/=10;
    if(rev<INT_MIN || rev>INT_MAX)return 0;
}
if(B<0)return rev*-1;
return rev;
}
