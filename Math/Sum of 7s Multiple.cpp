long Solution::solve(int A, int B) {
    long long int sum=0;
    long long int x= B/7;
    long long int y =A/7;
    sum=7*(x*(x+1)/2 - y*(y+1)/2);
    if(A % 7==0){
            sum +=A;
    }
    return sum;

}
