int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    vector<int>v;
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)
        {
            v.push_back(A[i][j]);
        }
    }

    int start=0;
    int end=v.size()-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        
        if(v[mid]==B)return 1;
        else if(v[mid]>B)end=mid-1;
        else start=mid+1;
    }

    
    return 0;

}
