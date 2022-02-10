#include<stdio.h>
#include<conio.h>
int main()
{
 
 int a[10],n,i,j,t;
 printf("\n Enter size of array");
 scanf("%d",&n);
 printf("\n Enter %d values to array ",n);
 for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
 for(i=0;i<n;i++)
{
 for(j=0;j<n-1-i;j++)
{
 if(a[j]>a[j+1])
{
 t=a[j];
 a[j]=a[j+1];
 a[j+1]=t;
}
}
}
 printf("\n sorted array in ascending order");
 for(i=0;i<n;i++)
{
 printf("\n%d",a[i]);
}
 return 0;
}