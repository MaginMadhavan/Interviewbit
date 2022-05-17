int Solution::threeSumClosest(vector<int> &A, int B) {

int n=A.size();
long long  ans=INT_MAX;
sort(A.begin(),A.end());

    for(int i=0;i<n-2;i++)
    {
        int j=n-1,k=i+1;
        while(j>k)
        {
            long long sum=A[i]+A[j]+A[k];
            if(abs(sum-B)<abs(ans-B))ans=sum;

            if(sum==B)return B;
            else if(sum<B)k++;
            else j--;
        }
    }
    return ans;
}
