int Solution::solve(vector<int> &A, int B) {
  int current_sum=0;
  int max_sum=0;
  for(int i=0;i<B;i++)
  {
      current_sum+=A[i];
  } 
  max_sum=current_sum;
  int j=A.size()-1;
 for(int i=B-1;i>=0;i--)
 {
    current_sum=current_sum + A[j] - A[i];
    max_sum=max(current_sum,max_sum);
    j--;
 }
 return max_sum;
}

