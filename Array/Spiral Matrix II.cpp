vector<vector<int> > Solution::generateMatrix(int A) {

vector<vector<int> > v(A);
for(int i=0; i<A; i++) v[i].resize(A);

int top=0;
int left=0;
int bottom=A-1;
int right=A-1;

int j=1;

while(j<=A*A)
{
 
    for(int i=left;i<=right;i++)v[top][i]=j++;
    top++;
    for(int i=top;i<=bottom;i++)v[i][right]=j++;
    right--;
    for(int i=right;i>=left;i--)v[bottom][i]=j++;
    bottom--;
    for(int i=bottom;i>=top;i--)v[i][left]=j++;
    left++;
  
}

return v;

}
