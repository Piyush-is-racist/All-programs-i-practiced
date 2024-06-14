#include<stdio.h>
int main(){
    int arr[100],n,add;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter the ele: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Ele to be added at end: ");
    scanf("%d",&add);

    arr[n]=add;
    n++;
      for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);

      }
    return 0;
}
