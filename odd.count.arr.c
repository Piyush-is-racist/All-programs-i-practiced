#include<stdio.h>
int odd_count(int arr[],int n);
int main(){
    int arr[100]; int n;
    printf("Enter the no. of ele: ");
    scanf("%d",&n);
    printf("Enter the ele of arr: ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("odd no count : %d",odd_count(arr,n));
    return 0;

}

int odd_count(int arr[],int n)
{
    int a=0;
    for(int i=0;i<n;i++){
        if (arr[i]%2!=0)
            a++;

    }
    return a;
}