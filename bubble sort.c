#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int a[10],n,j,temp=0,i;
    printf("enter the number of elements:\n");
    scanf("%d",&n);
    printf("enter the elements:\n");
    for(i=0;i<n;i++)
    scanf("\n%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nThe sorted list is:\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    getch();
}
