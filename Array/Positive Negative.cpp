vector<int> Solution::solve(vector<int> &A) 
{
    vector<int>v;
    int pos=0; int neg=0;
    for(int i=0; i<A.size(); i++){
        if(A[i]>0)pos++;
        if(A[i]<0)neg++;     
    }
    v.push_back(pos);
    v.push_back(neg);
    return v;

    
  

}
