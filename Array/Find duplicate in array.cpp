int Solution::repeatedNumber(const vector<int> &A) {
    //hashing method
    /*vector<int>v(A.size()+1,0);
    for(int i=0;i<A.size();i++)
    {
        if(v[A[i]]==1)return A[i];
        v[A[i]]=1;
    }
 return -1;*/
 
    //Tortoise and the hare
    int slow=A[0],fast=A[0];
    int n=A.size();
    
    do
    {
        slow=A[slow];
        fast=A[A[fast]];
    }while(slow!=fast);
    
    fast=A[0];
    while(fast!=slow)
    {
        slow=A[slow];
        fast=A[fast];
    }
    return slow;
    
}

