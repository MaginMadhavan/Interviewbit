int Solution::lengthOfLastWord(const string A) {
    int word=0;
    
    for(int i=A.size()-1;i>=0;i--)
    {
        if(A[i]==' ')
        {
            if(word!=0)return word;
        }
       else {word++;}
    }
    
    return word;
}
