int Solution::maxSubArray(const vector<int> &A) {
    int meh=0;//maximum ending here
    int msf=INT_MIN;//maximum so far
    for(int i=0;i<A.size();i++)
    {
        meh+=A[i];
        if(meh<A[i])meh=A[i];
        msf=max(msf,meh);
    }
    return msf;
}
