int Solution::solve(vector<int> &A) {
    int mini= INT_MAX;
    int maxi= INT_MIN;
    for(int i=0;i<A.size();i++)
    {
        mini=min(mini,A[i]);
        maxi=max(maxi,A[i]);
    }
    return(mini+maxi);
}
