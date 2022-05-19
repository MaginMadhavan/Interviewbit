vector<int> Solution::findPerm(const string A, int B) {
    int small=1;
    int large=B;
    vector<int>v;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]=='I')
        {
            v.push_back(small);
            small++;
        }
        if(A[i]=='D')
        {
            v.push_back(large);
            large--;
        }
    }
    
    v.push_back(large);
    return v;
}
