#include<stdio.h>
#include<string.h>
int vowels(char str[]);
int main(){
char str[100];
gets(str);
printf("No. of vowels are: %d", vowels(str));
return 0;
}

int vowels(char str[]){
    int c=0;
    for(int i=0;i<=(strlen(str)+1);i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            c++;
    }
    return c;
}
