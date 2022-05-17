void Solution::merge(vector<int> &A, vector<int> &B) {
    int n=A.size(),m=B.size();
    int i=n-1,j=m-1;
    int k=n+m-1;

    A.resize(n+m);

    while(j>=0)
    {
        if(i>=0 and A[i]>B[j])
        {
            A[k]=A[i];
            i--;
        }
        else 
        {
            A[k]=B[j];
            j--;
        }
        k--;
    }
}
