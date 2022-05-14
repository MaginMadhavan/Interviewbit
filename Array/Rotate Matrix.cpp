void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


    //transpose of matrix
    for(int i=0;i<A.size();i++)
    {
        for(int j=i;j<A[0].size();j++)
        {
            if(j!=i)
            {
                swap(A[j][i],A[i][j]);
            }
        }
    }

    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size()/2;j++)
        {
            swap(A[i][j],A[i][A.size()-1-j]);
        }
    }
    
}
