vector<vector<int> > Solution::solve(vector<vector<int> > &A) {
    for(int i=0;i<A.size();i++)
    {
        for(int j=i;j<A.size();j++)
        {
            swap(A[i][j],A[j][i]);
        }
    }
    return A;
}
