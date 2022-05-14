int Solution::solve(vector<int> &arr, int a) {

    int i=0;
    int n=arr.size();
    int count=0;
    
    while(i<n)
    {
        int right=min(i+a-1,n-1);
        int left=max(i-a+1,0);

        bool lightfound=false;

        while(right>=left)
        {
          if(arr[right]==1){lightfound=true; break;}
          right--;
        }

        if (lightfound==false)return -1;
        count++;

        i=right+a;
    }

    return count;
}

