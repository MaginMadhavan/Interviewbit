int Solution::solve(vector<int> &A) {
    int n=A.size(),maxi=INT_MIN,sum=0;
    unordered_map<int,int>m;
    
    for(int i=0;i<n;i++)
    {
        if(A[i]==0)sum+=-1;
        else sum+=1;
        
        if(sum==1)maxi=i+1;
        if(m.find(sum)== m.end())
        {
            m[sum]=i;
        }
        if(m.find(sum-1)!=m.end())
        {
            maxi=max(maxi,i-m[sum-1]);
        }
    }
    return maxi;
    
}
