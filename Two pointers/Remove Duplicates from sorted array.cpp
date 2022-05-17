int Solution::removeDuplicates(vector<int> &A) {
    int n=A.size(),j=0;
    for(int i=0;i<n;i++)
    {
        if(i<n-1 && A[i]==A[i+1])continue;
        else 
        {
            A[j]=A[i];
            j++;     
        }         
    }
    return j;
}
