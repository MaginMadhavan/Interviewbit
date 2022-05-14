int Solution::solve(vector<int> &A) {
    vector<int>v(A.size());
    int n=A.size();
    for(int i=n-1;i>=0;i++)
    {
        v[i]=A[i];
        if(i+2<n)v[i]+=v[i+2];

    }

    for(int i=0;i<n;i++)
    {
        int todd=0,teven=0;
        if(i%2==0)
        {
            if(i+1<n)teven=v[i+1];
            if(i+2<n)todd=v[i+2];
        }

        if(i%2==1)
        {
            if(i+1<n)todd=v[i+1];
            if(i+2<n)teven=v[i+2];
        }

        if(todd+odd==teven+even)count++;

        if(i%2==0)even+=A[i];
        if(i%2==1)odd+=A[i];
    }

    return count;
}
