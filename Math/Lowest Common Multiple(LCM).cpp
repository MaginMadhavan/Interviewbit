long Solution::solve(int A, int B) {
    long long x=A;
    x*=B;
    x/=__gcd(A,B);
    return x;
}
