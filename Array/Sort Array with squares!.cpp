vector<int> Solution::solve(vector<int> &A) {

       vector<int>v(A.size(),0);

    int left=0;
    int right=A.size()-1;
    

    for(int i=A.size()-1;i>=0;i--)
    {
        if(abs(A[left])< abs(A[right]))
        {
            v[i]=A[right]*A[right];
            right--;
        }
        else
        {
            v[i]=A[left]*A[left];
            left++;
        }
    }
    return v;

}
