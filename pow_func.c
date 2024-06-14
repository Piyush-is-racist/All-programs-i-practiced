#include<stdio.h>
int main(){
    int base, pow;
    printf("Enter the base and pow: ");
    scanf("%d %d",&base, &pow);
    int x=p(base, pow);
    printf("result: %d",x);
    return 0;

}
int p (int base,int pow){
    int r=1;
    int expo=pow; 
    for (int i=0;i<expo;i++){
        r*=base;
    }
    return r;
}