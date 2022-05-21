vector<int> Solution::searchRange(const vector<int> &A, int b) {

    int n=A.size();
    int start=0, end=n-1;
    int left=-1,right=-1;

    while(start<=end)
    {
        int mid=start + (end-start)/2;
        if(A[mid]==b)left=mid;
        if(A[mid]>=b)end=mid-1;
        else start=mid+1;
        
    }
     start=0;
     end=n-1;
    while(start<=end)
    {
         int mid=start + (end-start)/2;
        if(A[mid]==b)right=mid;
        if(A[mid]<=b)start=mid+1;
        else end=mid-1;
    }

    return {left,right};



}
