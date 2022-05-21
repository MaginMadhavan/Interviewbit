int Solution::solve(vector<int> &A, int B) {
    int start=0;
    int end=A.size()-1;
    int mid;
    int ans=INT_MIN;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(A[mid]>B)end=mid-1;
        else if(A[mid]<B)start=mid+1;
        else {ans=mid;break;}
        
    }

    
    if(ans==INT_MIN)
    {
        if(A[mid]>B)ans=mid-1;
        else ans=mid;
    }
    while(A[ans]==A[ans+1])
    {
        ans++;
    }
    return ans+1;
}
