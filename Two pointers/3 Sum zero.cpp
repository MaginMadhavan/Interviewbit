vector<vector<int> > Solution::threeSum(vector<int> &A) {
    sort(A.begin(),A.end());

    int n=A.size();
    vector<vector<int>>v;
    for(int first=0;first<n-2;first++)
    {
        if(first>0 && A[first]==A[first -1])continue;
        
        int second=first+1, last=n-1;
        while(second<last)
        {
            long long int sum= (long long int)A[first]+(long long int)A[second]+(long long int)A[last];
            
            if(sum==0)
            {
                vector<int>temp;
                temp.push_back(A[first]);
                temp.push_back(A[second]);
                temp.push_back(A[last]);

                v.push_back(temp); 
                
                while(second<last && A[second]==A[second +1]){second++;}
                while(second<last && A[last]==A[last-1]){last--;}
                second++;
                last--;
            }
            else if (sum<0)second++;
            else last--;
        }
    }
    return v;
}
