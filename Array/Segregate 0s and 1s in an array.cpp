vector<int> Solution::solve(vector<int> &A) {
    int count0=0;
    vector<int>v(A.size(),1);
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==0)
        {v[count0]=0;
        count0++;}
    }
      return v;
}
