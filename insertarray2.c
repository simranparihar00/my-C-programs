#include<stdio.h>
int main()
{
  int n,i,insert,pos ,a[1];
  printf("enter the limit");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    sacnf("%d",&a[i]);
  }
  printf("original array are following\n");
    for (i=0;i<n;i++)
    {
      printf("%d\n",a[i]);
    }
  printf("enter teh value that you want to insert");
  scanf("%d",&insert);
  printf("enter the position");
  scanf("%d",&pos);
  for(i=n-1;i>=pos-1;i--)
  { 
    a[i+1]=a[i];
  }
  a[pos-1]=insert;
    printf("\n after insert the array is following\n");
    for(i=0;i<=n;i++)
    {
      printf("%d\n",a[i]);
    }
  return 0;
}
   
           
       
  
    
      
