int Solution::solve(vector<int> &A) {
    
    sort(A.begin(),A.end(),greater<int>());
   
    if(A[0]==0)return 1;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]!=A[i-1])
        {
        if(A[i]==i){return 1;}
        }
    }

 return -1;
    
}
