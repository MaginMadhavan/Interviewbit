vector<int> Solution::findPerm(const string A, int B) {
    int s=1;
    int l=B;
    vector<int>v;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]=='I')
        {
            v.push_back(s);
            s++;
        }
        if(A[i]=='D')
        {
            v.push_back(l);
            l--;
        }
    }
    
    v.push_back(l);
    return v;
}
