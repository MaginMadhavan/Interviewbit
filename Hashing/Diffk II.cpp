int Solution::diffPossible(const vector<int> &A, int B) {
    
    unordered_map<int,int>m;
    
    for(int i=0;i<A.size();i++)
    { 
        m[A[i]]=i;
    }
    for(int i=0;i<A.size();i++)
    {
        int target1=A[i]+B,target2=A[i]-B;
        
        if((m.find(target1)!=m.end() && m[target1]!=i) or 
           (m.find(target2)!=m.end() && m[target2]!=i))
           
           return 1;
    }
    return false;
}
