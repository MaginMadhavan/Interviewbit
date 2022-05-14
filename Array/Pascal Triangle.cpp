int binomial(int n,int k)
    {
        if(k==0||k==n)return 1;
        if(k>n-k)k=n-k;
        int ans=1;
        for(int i=0;i<k;i++)
        {
            ans*=n-i;
            ans/=i+1;
        }
        return ans;
    }
vector<vector<int> > Solution::solve(int A) {
    
    vector<vector<int>>v;

   
    for(int i=0;i<A;i++)
    {
        vector<int>r;
        for(int j=0;j<=i;j++)
        {
            r.push_back(binomial(i,j));
        }
        v.push_back(r);
    }
    return v;
}

