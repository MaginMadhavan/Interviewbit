int Solution::maxArea(vector<int> &A) {

    int n=A.size();
    if(n==1)return 0;

    int area=INT_MIN,i=0,j=n-1;
    
    while(i<j)
    {
       int temp=min(A[i],A[j])*(j-i);
        area=max(area,temp);

        if(A[i]<A[j])i++;
        else j--;
    }
    return area;
}
