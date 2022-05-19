int Solution::permuteStrings(string A, string B) {

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    if(A==B)return 1;
    return 0;
}
