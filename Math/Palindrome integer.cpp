int Solution::isPalindrome(int n) {

    if(n<0)return false;
    if(n==0)return true;
    int temp=n;

    int ans=0;
    int rem;
    
    while(temp>0)
    {
        rem=temp%10;
        ans=ans*10 + rem;
        temp/=10;
        
    }
    return(ans==n);
    
}
