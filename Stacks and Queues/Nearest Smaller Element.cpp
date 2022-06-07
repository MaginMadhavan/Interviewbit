vector<int> Solution::prevSmaller(vector<int> &A) {
    int n=A.size();
    stack<int>s;
    vector<int>G(n,-1);

    for(int i=0;i<n;i++)
    {
        
        while(!s.empty() && s.top()>=A[i]  ) s.pop();
        if(!s.empty())G[i]=s.top();
        
        s.push(A[i]);
    }
    return G;
}
