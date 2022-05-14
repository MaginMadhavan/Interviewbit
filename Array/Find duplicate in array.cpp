int Solution::repeatedNumber(const vector<int> &A) {
    //hashing method
    /*vector<int>v(A.size()+1,0);
    for(int i=0;i<A.size();i++)
    {
        if(v[A[i]]==1)return A[i];
        v[A[i]]=1;
    }*/

    vector<int>v(A.size()+1,0);
    for(int i=0;i<A.size();i++)
    {
        v[A[i]]=v[A[i]]+1;
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>1)return i;
    }
 
 return -1;
}
