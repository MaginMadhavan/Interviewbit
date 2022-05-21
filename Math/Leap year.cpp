int Solution::solve(int A) {
    if(A%400==0)return true;
    else if(A%4==0 && A%100!=0)return true;
    else return false;
}
