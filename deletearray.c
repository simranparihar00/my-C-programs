#include<stdio.h>
int main()
{
int n,i,pos,delete,a[10];
printf("enetre the limit");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("before array deleting are following\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
printf("enter position where you want to delete element\n");
scanf("%d",&pos);
if(pos>=n+1)
{
  printf("out of range");
}
else
{
for(i=pos-1;i<n-1;i++)
{
printf("%d\n",a[i]);
}
}
return 0;
}
