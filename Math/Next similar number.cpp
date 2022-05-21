string Solution::solve(string A) {

    int n=A.size();
    int peak=-1;

    if(n==1)return "-1";
    for(int i=1;i<n;i++)
    {
        if(A[i]>A[i-1])peak=i;
    }

    if(peak==-1)return "-1";
    

    int index=peak;
    for(int i=peak;i<n;i++)
    {
        if(A[i]<A[index] && A[i]>A[peak-1]){ index=i;}
    }

    swap(A[index],A[peak-1]);
    sort(A.begin()+peak,A.end());

    return A;
}
