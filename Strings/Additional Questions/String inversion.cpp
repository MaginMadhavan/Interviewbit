string Solution::solve(string A) {

    for(int i=0;i<A.size();i++)
    {
        if(A[i]>='A' && A[i]<='Z')A[i]=A[i]+32;
        else A[i]=A[i]-32;
    }
    return A;
}
