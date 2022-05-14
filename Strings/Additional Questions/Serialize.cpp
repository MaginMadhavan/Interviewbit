string Solution::serialize(vector<string> &A) {
    string temp="";
    for(int i=0;i<A.size();i++)
    {
        temp=temp+A[i];
        int len=A[i].size();
        temp+=to_string(len)+'~';
    }
    return temp;
}
