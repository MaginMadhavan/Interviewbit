vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(),A.end());
    int size=A.size();
    int n=(size/2)*2;
    for(int i=0;i<n-1;i=i+2)
    {
        swap(A[i],A[i+1]);
    }
    return A;
}
