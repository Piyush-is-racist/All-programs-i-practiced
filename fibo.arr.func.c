#include<stdio.h>
void fibo(int n);
int main(){
    int n;
    printf("Enter n (n>2): ");
    scanf("%d", &n);

    fibo(n);
    return 0;

}

void fibo(int n)
{
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    printf(" Fibo series: \n");
    printf("%d\t%d\t",arr[0],arr[1]);

    for(int i=2;i<n;i++){
        arr[i]=arr[i-1]+arr[i-2];
        printf("%d\t",arr[i]);
    }
}