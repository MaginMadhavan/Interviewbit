int Solution::solve(int A, vector<int> &B) {


vector<int>prefix;
vector<int>suffix;
int sum=0;

for(int i=0;i<A;i++)
{
    sum+=B[i];
}
int n=sum/3;
int temp=0;
for(int i=0;i<A-1;i++)
{
    temp+=B[i];
    if(temp==n)prefix.push_back(i);
}
temp=0;
for(int i=A-1;i>0;i--)
{
    temp+=B[i];
    if(temp==n)suffix.push_back(i);
}

int count=0;
for(int i=0;i<prefix.size();i++)
{
    for(int j=0;j<suffix.size();j++)
    {   
        int final_sum=0; int r=0;
        if(prefix[i]<suffix[j]){
        for(int k=prefix[i]+1;k<suffix[j];k++)
        {
            final_sum+=B[k]; r=1;
        }}
        if(final_sum==n && r==1 )count++;
    }
}
return count;

}
