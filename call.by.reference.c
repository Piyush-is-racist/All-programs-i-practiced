#include<stdio.h>
void a(int *n);
int main(){
int n=4;
printf("%u\n",&n);
a(&n);
return 0;
}

void a(int *n){
    printf("%u",n);
}