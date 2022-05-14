vector<int> Solution::addArrays(vector<int> &A, vector<int> &B) {

    int n=A.size();
    int m=B.size();
    vector<int>v(max(n,m)+1,0);


    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());

    int digit;
    int carry;



    for(int i=0;i<max(m,n);i++)
    {
        
        int sum=0;
        if(i<n)sum+=A[i];
        if(i<m)sum+=B[i];
       
        sum+=v[i];
        digit=sum%10;
        carry=(sum)/10 ;

        v[i]=digit;

        if(carry>0)v[i+1]+=carry;


    }

    if(v[max(m,n)]==0)v.pop_back();
    reverse(v.begin(),v.end());

    return v;

}
