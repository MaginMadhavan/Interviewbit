int Solution::firstMissingPositive(vector<int> &A) {

    int n=A.size();
   for(int i=0;i<A.size();i++)
   {
       int correct_position=A[i]-1;
       while(A[i]>0 && A[i]<=A.size() && A[i]!= A[correct_position])
       {
           swap(A[i],A[correct_position]);
           correct_position=A[i]-1;
       }}

for(int i=0;i<n;i++)
{
    if(A[i]!=i+1)return i+1;
}

return n+1;
   
    



}
