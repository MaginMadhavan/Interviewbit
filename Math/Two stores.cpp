int Solution::solve(int A, int B, int C, int D, int E) {

    int ans=INT_MAX;
    for(int i=0;i<=A;i++)
    {
        for(int j=0;i+j<=A;j++)
        {
            if(i+j==A && i%B==0 && j%D==0)
            {
                ans=min(ans,(i/B)*C+(j/D)*E);
            }
        }
    }
    if(ans==INT_MAX)return -1;
    return ans;
}

