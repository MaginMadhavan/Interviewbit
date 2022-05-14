string Solution::longestCommonPrefix(vector<string> &A) {
    string s;
    string val;
    string temp;
    int tag=0;
    for(int i=0;i<A[0].size();i++)
    {
        
        s=A[0][i];

        for(int j=1;j<A.size();j++)
        {
            val=A[j][i];
            if(s!=val){return temp;}

        }
        temp+=s;
    }
    return temp;
}
