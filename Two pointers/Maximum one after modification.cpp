int Solution::solve(vector<int> &A, int B) {
    int n=A.size(), j=0,flip=0,ans=0;
    
    for(int i=0;i<n;i++)
    {
        if(A[i]==0)flip++;
        while(flip>B)
        {
            if(A[j]==0)flip--;
            j++;

        }
        ans=max(ans,i+1-j);

    }
    return ans;
}
