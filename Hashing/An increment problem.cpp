vector<int> Solution::solve(vector<int> &A) {
    
    unordered_map<int,int>m;
    int temp;
    for(int i=0;i<A.size();i++)
    {
        if(m.find(A[i])!=m.end())
        {
            temp=m[A[i]];
            m[A[i]]=i;
            A[temp]++;
            m[A[temp]]=temp;
        }
        else
        {
            m[A[i]]=i;
        }
    }
    return A;  
}
