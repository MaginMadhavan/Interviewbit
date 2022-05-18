vector<int> Solution::maxone(vector<int> &A, int B) {
    int n=A.size(),flip=0,j=0, ans=0,result=INT_MIN,left=0,right=0;
    
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        if(A[i]==0)flip++;
        while(flip>B)
        {
            if(A[j]==0){flip--;}
            j++;
        }
        if(right-left<i-j)
        {
            right=i;
            left=j;
        }
    }

    for(int i=left;i<=right;i++)v.push_back(i);

return v;  
}
