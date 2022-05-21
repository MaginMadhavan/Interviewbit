int Solution::divisibleBy60(vector<int> &A) {
    int flag2=0,flag0=0,flag3=0;
   
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==0)flag0=1;
        if(A[i]%2==0 && A[i]!=0)flag2=1;
        flag3+=A[i];
    }
    if(flag3==0)return 1;
    if(flag0==1 && flag2==1 && flag3%3==0)return 1;
    return 0;
}
