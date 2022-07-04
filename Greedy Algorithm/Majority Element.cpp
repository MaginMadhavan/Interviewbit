int Solution::majorityElement(const vector<int> &A) {
    int count=0,major=0;
    
    for(int i=0;i<A.size();i++)
    {
        if(count==0)major=A[i];
        if(major==A[i])count++;
        else count--;
    }
    return major;
}
