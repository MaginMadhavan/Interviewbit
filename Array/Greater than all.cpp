int Solution::solve(vector<int> &A) {
    vector<int>v;
    int maxi=INT_MIN;
    for(int i=0;i<A.size();i++)
    {
        maxi=max(maxi,A[i]);
        v.push_back(maxi);
    }
    int count=1;
    for(int i=1;i<A.size();i++)
    {
        if(A[i]>v[i-1])count++;
    }
    
    return count;
    }
