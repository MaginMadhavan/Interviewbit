int Solution::solve(int A, int B, int C) {
    if((A+C-1)%B==0)return B;
    else return (A+C-1)%B;
  
}
