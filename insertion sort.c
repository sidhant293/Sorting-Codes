#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
  int i,j,n,temp,a[10];
  printf("Enter the number of elements:\n");
  scanf("%d",&n);

  printf("Enter the elements:\n");
  for(i=0;i<n;i++)
      scanf("%d",&a[i]);
  for(i=1;i<=n;i++)
    {
      j=i;
      while((a[j]<a[j-1])&&(j>0))
    {
        temp=a[j];
      a[j]=a[j-1];
      a[j-1]=temp;
          j=j-1;
      }
  }
  printf("The sorted list is:\n");
  for(i=0;i<n;i++)
      printf("\n%d",a[i]);
   getch();
}

