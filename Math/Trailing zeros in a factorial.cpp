int Solution::trailingZeroes(int n) 
{
   /* int count=0;
    while(n/5>0){
        count+=n/5;
        n/=5;}
    return count;*/
    
    
    long long int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans*=i;
    }
    int count=0;
    while(ans%10==0)
    {
        ans/=10;
        count++;
    }
    cout<<ans;
   return count;
            
}


