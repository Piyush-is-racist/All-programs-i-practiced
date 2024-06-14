#include<stdio.h>
int max(int arr[],int n);
int main(){
    int arr[100];
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter the ele: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Largest no.: %d",max(arr,n));
    return 0;

}
int max(int arr[],int n){
    int m;
    for(int i=0;i<n;i++){
            if (arr[i]>arr[i+1])
                m=arr[i];
}
return m;
}

