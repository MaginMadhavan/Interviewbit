int Solution::solve(vector<int> &A) {

    int n=A.size();

    //right suffix array
    vector<int>right(n);
    right[n-1]=A[n-1];
    for(int i=n-2;i>=0;i--)
    {   
        right[i]=max(right[i+1],A[i]);
    }

    set<int>left;
    left.insert(A[0]);
    int ans=0;
    for(int i=1;i<n;i++)
    {   
        left.insert(A[i]);
        auto j = left.find(A[i]);
        if(j!=left.begin()&& right[i]!=A[i])
        ans=max(ans,A[i]+right[i]+(*--j));
    }

    return ans;
    
}
