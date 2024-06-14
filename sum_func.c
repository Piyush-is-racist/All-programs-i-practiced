#include<stdio.h>

int main(){
    int a,b;
printf("Enter two numbers: ");
scanf("%d %d", &a,&b);

printf("sum= %d", sum(a,b));
return 0;
}

int sum(int a,int b){
return a+b;
}
