vector<int> Solution::allFactors(int A) {
     
    vector<int> v;
    
    for(int i=1;i*i<=A;i++)
    {

    if(A%i==0) 
    {
        if(i*i!=A)
        {
            v.push_back(i);
            v.push_back(A/i);
        }
        else v.push_back(i);
    }
    }
    sort(v.begin(),v.end());
    return v;
}
