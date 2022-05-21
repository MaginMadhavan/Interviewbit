int Solution::solve(vector<int> &A, int B, int C) {

    int day;
    int count=0;

    if(B%2==1)day=1;
    else if(B%2==0)day=0;

    for(int i=0;i<A.size();i++)
    {   
        if((A[i]%2) != day)count++;

    }
    return count*C;
}
