int Solution::searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
int n=A.size();
int mid, start=0,end=n-1;

while(start<=end)
{
    mid=start + (end-start)/2;

    if(A[mid]==B)return mid;
    else if(A[mid]>B)end=mid-1;
    else start=mid+1;
}

if(A[mid]>B)return mid;
else if(A[mid]<B)return mid+1;

}
