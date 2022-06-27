vector<int> Solution::twoSum(const vector<int> &A, int B) {
    unordered_map<int,int>m;
    int n=A.size(),target=B;
    for(int i=0;i<n;i++)
    {
        if(m.find(target-A[i])!=m.end())
        {
            return{m[target-A[i]],i+1};
        }
        if(m.find(A[i])==m.end()) m[A[i]]=i+1;
    }
    return{};  
}
