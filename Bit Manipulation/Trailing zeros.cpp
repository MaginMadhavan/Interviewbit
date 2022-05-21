int Solution::solve(int A) {
    int count=0;
    while(A%2==0)
    {
        A/=2;
        count++;
    }
    return count;
}
