#include<stdio.h>
int main()
{
    int arr[20];
    printf("Enter 5 ele: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

for(int i=4;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }

}