vector<vector<int> > Solution::fourSum(vector<int> &A, int B) {
    
    int n=A.size(),left,right,target;
    int i=0,j;
    
    sort(A.begin(),A.end());
    vector<vector<int>> result;
    
    while(i<n-3)
    {
        j=i+1;
        while(j<n-2)
        {
            left=j+1;
            right=n-1;
            target=B-(A[i]+A[j]);
            while(left<right)
            {
                int sum=A[left]+A[right];
                
                if(sum<target)left++;
                else if(sum>target)right--;
                else{
                    vector<int>v;
                    v.push_back(A[i]);
                    v.push_back(A[j]);
                    v.push_back(A[left]);
                    v.push_back(A[right]);
                    
                    result.push_back(v);
                    
                    left++;right--;
                    while(A[left]==A[left-1])left++;
                    while(A[right]==A[right+1])right--;
                }
                
            }
            j++;
            while(A[j]==A[j-1])j++;
        }
        i++;
        while(A[i]==A[i-1])i++;
    }
    return result;
}

