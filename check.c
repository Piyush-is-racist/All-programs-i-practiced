#include<stdio.h>
#include<string.h>
void check(char str[],char a);

int main(){
char str[100]; char a;
printf("str: ");
gets(str);
printf("word: ");
scanf("%c",&a);
check(str,a);
return 0;
}

void check(char str[],char a){
    int c=0;
    for(int i=0;i<=str[i]!='\0';i++){
        if(str[i]==a){

         c=1;
        }
    }
     if (c==1)
         printf("Found");

    else
        printf("not found");

}


