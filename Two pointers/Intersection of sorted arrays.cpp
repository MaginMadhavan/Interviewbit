vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    int m=A.size();
    int n=B.size();

    int j=0;
    vector<int>v;

    for(int i=0;i<m;i++)
    {
       while(j<n)
       {
           if(A[i]<B[j])break;
           if(A[i]==B[j])
           {
               v.push_back(A[i]);
               j++;
               break;
           }
           j++;
       }
    }
    return v;
}
