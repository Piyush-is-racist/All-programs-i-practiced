#include<stdio.h>
int cnt(int arr[],int n,int find);
int main(){
    int arr[100];
    int n,find;
    printf("Enter the no. of ele: ");
    scanf("%d",&n);
    printf("Enter the ele: ");
    for(int i= 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("No. to find: ");
    scanf("%d",&find);

    printf("Times of ocuur of %d: %d",find,cnt(arr,n,find));
    return 0;
}

int cnt(int arr[],int n,int find){
    int c=0;
    for(int i=0;i<n;i++){
        if (arr[i]==find)
            c++;
    }
    return c;
}
