int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int n1=A.size();
    int a_dif=0;
    int b_dif=0;
    int step=0;
    for(int i=0;i<n1-1;i++)
    {
      a_dif=abs(A[i]-A[i+1]);
      b_dif=abs(B[i]-B[i+1]) ; 
      step+=  max(a_dif,b_dif);
    }
    return step;
}
