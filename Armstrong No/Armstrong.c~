#include<stdio.h>
#include<math.h>
void arm(int a)
{
  int temp,r,count=0,sum=0,temp2;
  temp2=a;
  while(temp2>0)
  {
     temp2=temp2/10;
     count++;
  }
  temp=a;
  while(temp>0)
  {
    r=temp%10;
    sum+=pow(r,count);
    temp=temp/10;
  }
  if(a==sum)
  {
  printf("%d\n",a);
  }
}
int main()
{
   int n,i;
   printf("Enter the no. of elements to be stored in array:");
   scanf("%d",&n);
   int arr[n];
   printf("Enter the elements :");
   for(i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
   }
   printf("armstrong numbers are:\n");
   for(i=0;i<n;i++)
   {
   arm(arr[i]);
   }
}
