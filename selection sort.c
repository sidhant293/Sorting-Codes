#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
 void main()
 {
     int a[10],i,j,temp,loc,n;
     printf("enter the number of elements:\n");
     scanf("%d",&n);
     printf("the elements are:\n");
     for(i=0;i<n;i++)
        scanf("\n%d",&a[i]);
     for(i=0;i<n-1;i++)
     {
         loc=i;
         for(j=i+1;j<n;j++)
         {
            if(a[loc]>a[j])
                loc=j;
         }
         temp=a[i];
         a[i]=a[loc];
         a[loc]=temp;
     }
     printf("the sorted elements are:\n");
     for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    getch();
 }
