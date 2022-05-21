int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    int i=0;
    int count=0;
    while(i<A.size()-1)
    {
        if(A[i]==A[i+1])
        {
            count++;
            i+=2;
        }
        else i++;
    }
    return count;
}
