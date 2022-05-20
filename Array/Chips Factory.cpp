vector<int> Solution::solve(vector<int> &A) {
    vector<int>v;
    int count=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]!=0)v.push_back(A[i]);
        else count++;
    }
    for(int i=0;i<count;i++)v.push_back(0);
    return v;
}
