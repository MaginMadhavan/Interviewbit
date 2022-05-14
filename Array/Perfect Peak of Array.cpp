int Solution::perfectPeak(vector<int> &A) {
  vector<int>B;
    vector<int>C;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0;i<A.size();i++)
    {
         if(maxi==A[i])B.push_back(INT_MIN);
       else{maxi=max(maxi,A[i]);
        B.push_back(maxi);}
       
    }
    for(int j=A.size()-1;j>=0;j--)
    {
        if(mini==A[j]) C.push_back(INT_MAX);
         else{mini=min(mini,A[j]);
        C.push_back(mini);}
        
    }
    reverse(C.begin(),C.end());
    for(int k=1;k<A.size()-1;k++)
    {
        if(B[k]==C[k])return 1;
    }
    return 0;
 
}
