int Solution::solve(string A) {
   int a[26]= {0};
    for( int i =0 ; i < A.size();i++){
        a[A[i]-'a']++;
    }

    int odd = 0 ;
    for( int i =0 ; i <26 ;i ++){
        if( (a[i])%2 ){
            odd++;
        }
    }
    return odd <=1;

}
