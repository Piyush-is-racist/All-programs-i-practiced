#include<stdio.h>
void maxfn(int a,int b, int *max);
int main()
{
    int a,b,max;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    maxfn(a,b,&max);
    printf("max= %d",max);
    return 0;

}
void maxfn(int a,int b, int *max)
{
    if(a<b)
    *max=b;
    else
    *max=a;
}
