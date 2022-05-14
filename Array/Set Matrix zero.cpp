void Solution::setZeroes(vector<vector<int> > &v) {
    
    int row=v.size();
    int col=v[0].size();

    vector<int>m(row,0);
    vector<int>n(col,0);

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(v[i][j]==0)
            {
                m[i]=1;
                n[j]=1;
            }
        }
    }
    for(int i=0;i<row;i++)
    {
        if(m[i]==1){
            for(int j=0;j<col;j++)
            {
                v[i][j]=0;
            }
        }
    }
    for(int j=0;j<col;j++)
    {
        if(n[j]==1)
        {
            for(int i=0;i<row;i++)
            {
                v[i][j]=0;
            }
        }
    }
    return;

}
