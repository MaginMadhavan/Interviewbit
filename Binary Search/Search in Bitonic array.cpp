int binarysearch(vector<int>v,int start,int end, int search)
{
    int n=v.size();
    int val=end;
    while(start<=end)
    {
        
        int mid=start+(end-start)/2;
        if(v[mid]==search)return mid;
        else if(val!=n-1)
        {
            if(v[mid]>search)end=mid-1;
            else start=mid+1;
        }
        else 
        {
            if(v[mid]<search)end=mid-1;
            else start=mid+1;
        }
        
    }
    return -1;
}


int Solution::solve(vector<int> &A, int B) {
    int start=0;
    int n=A.size();
    int end=n-1;
    
    int mid;
    int bitonic;

    while(start<=end)
    {
        
        mid=start+(end-start)/2;
        int left=A[mid-1];
        int right=A[mid+1];
        if(A[mid]>left&&A[mid]>right){bitonic=mid;break;}
        else if(A[mid]>right)end=mid-1;
        else if(A[mid]<right)start=mid+1;
        
    }


    int ans=binarysearch(A,0,bitonic,B);
    if(ans==-1)
    {
        ans=binarysearch(A,bitonic,n-1,B);
    }
    return ans;
    
}
