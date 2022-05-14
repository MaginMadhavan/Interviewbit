vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
vector<vector<int>>v;
int n=A.size();
for(int i=0;i<A.size();i++)
{
    vector<int>r;
    int col=i,row=0;
    while(col>=0)
    {
        r.push_back(A[row][col]);
        row++;
        col--;
    }
    v.push_back(r);
}
for(int i=1;i<A.size();i++)
{
    vector<int>r;
    int col=n-1,row=i;
    while(row<n)
    {
        r.push_back(A[row][col]);
        row++;
        col--;
    }
    
    v.push_back(r);
}

return v;



}


