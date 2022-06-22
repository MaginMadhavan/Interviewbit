vector<int> Solution::lszero(vector<int> &A) {
    
    
    unordered_map<int,int>m;
    int n=A.size(),maxi=INT_MIN,sum=0,index;
    
    for(int i=0;i<n;i++)
    {
        sum+=A[i];
        
        if(sum==0)
        {
            maxi=i+1;
            index=i;
        }
        else 
        {
            if(m.find(sum)!=m.end())
            {
                if(maxi<i-m[sum])
                {
                    maxi=i-m[sum];
                    index=i;
                }
            }
            else m[sum]=i;
        }
        
    }
    vector<int>result;
    int j=index;
    
    for(int i=0;i<maxi;i++)
    {
     result.push_back(A[j]);
     j--;   
    }
    reverse(result.begin(),result.end());
    
    return result;
}
