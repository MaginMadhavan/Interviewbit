int Solution::diffPossible(vector<int> &A, int B) {

    int n=A.size();
    int i=0,j=1;;
    while(j<n)
    {
        if(A[j]-A[i]==B && i!=j)return 1;
        else if(A[j]-A[i]<B)j++;
        else i++;
    }
    return 0;
}

