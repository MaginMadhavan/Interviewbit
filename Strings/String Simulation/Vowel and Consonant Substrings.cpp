bool isvowel(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')return 1;
    return 0;
}
int Solution::solve(string A) {

    long int  l = A.length(), mod = 1000000007,sum=0;

    int vowel =0, cons =0;
    

    for(int i=0;i<l;i++){
        A[i] = tolower(A[i]);
            if(isvowel(A[i])){
                sum = ((sum+ cons%mod)%mod);
                vowel++;
            }
            else{
                sum = ((sum+ vowel%mod)%mod);
                cons++;
            }
    }
return sum;

}
