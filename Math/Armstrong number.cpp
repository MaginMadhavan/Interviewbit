int Solution::solve(int A) {
    int sum=0,count=0,value=A;
    
    while(A>0)
    {
        count++;
        A/=10;
    }

    A=value;

    while(A>0)
    {
        int digit=A%10;
        sum+=pow(digit,count);
        A/=10;
    }
    return(value==sum);
}
