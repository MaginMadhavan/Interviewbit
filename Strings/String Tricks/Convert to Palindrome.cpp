int Solution::solve(string A) {
  
int n = A.size();
int count=0, end= n-1, start =0, len=0;
bool flag = true;
 // for loop when we only increment start once
  for(int i=0;i<n;i++)
  {   if(len>=n)break;// To check no chnace of runtime error due to out of range index
      if(A[start]==A[end])
      {
          start++;
          end--;
          len=len+2;
      }

      else
      { count++;start++;len++;
          if(count==2)
          {
              flag= false;
              break;
          }
      }
  }
 len=0;end=n-1;start=0;count=0;

  // for loop when we only decrement end once
if(flag==false)
{  
  flag =true;
  for(int i=0;i<n;i++)
  {  if(len>=n)break;
        if(A[start]==A[end])
      {
          start++;
          end--;
          len=len+2;
      }

      else
      {  count++;
          end--;
         len++;
          if(count==2)
          {
              flag= false;
              break;
          }
      }
  }
}
 if(flag==true)return 1;
 return 0;

}
