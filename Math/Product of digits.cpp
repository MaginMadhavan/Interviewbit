 int Solution::solve(int A) {
    int product=1;
    if(A==0)return 0;
    while(A>0)
    {
        
        product*=A%10;
        A/=10;
    }
    return product;
}
