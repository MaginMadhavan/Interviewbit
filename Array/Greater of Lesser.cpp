int Solution::solve(vector<int> &A, vector<int> &B, int C) {
    int g=0;
    int l=0;
    for(int i=0;i<A.size();i++)
    {
       if(A[i]>C)g++;
    }
    for(int i=0;i<B.size();i++)
    {
        if(B[i]<C)l++;
    }
    return max(g,l);

}
