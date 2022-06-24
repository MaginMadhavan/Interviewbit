int Solution::solve(vector<int> &A) {
    
    unordered_map<int,int>m;
    vector<int>v;
    int n=A.size();
    
    for(int i=0;i<n;i++)
    {
        if(m.find(A[i])!=m.end())v.push_back(m[A[i]]);
        else m[A[i]]=i;
    }
    
    sort(v.begin(),v.end());
    
    if(v.empty())return -1;
    else return A[v[0]];
    
}
