void Solution::rotate(vector<vector<int> > &A) {
    
    int m=A.size(),n=A[0].size();
    
    //transpose of a matrix
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<i;j++) swap(A[i][j],A[j][i]);   
    }
    
    
    //reverse each row
    for(int i=0;i<m;i++) reverse(A[i].begin(),A[i].end());
     
}
