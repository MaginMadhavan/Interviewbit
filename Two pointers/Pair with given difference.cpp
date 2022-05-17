int Solution::solve(vector<int> &A, int B) {

    sort(A.begin(),A.end());
    int n=A.size(),i=0,j=1;
    if(n==1)return 0;

    while(i<n && j<n)
    {
        if(A[j]-A[i]==B && i!=j)return 1;
        else if(A[j]-A[i]>B)i++;
        else j++;
    }

    return 0;
}
