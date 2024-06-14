#include<stdio.h>
#include<string.h>
int vowels(char str[]);
int main(){
    FILE *fptr;
    fptr=fopen("vowels.txt","r");
    char ch;  
    ch=fgetc(fptr);
    while(ch!= EOF){
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);


    char buffer[1000]; 
    fptr=fopen("vowels.txt","r");
      if (fptr == NULL) {
        printf("Could not open file input.txt for reading.\n");
        return 1;
    }
    if (fgets(buffer, sizeof(buffer), fptr) != NULL) {
        printf("Read from file: %s", buffer);
    } else {
        printf("Could not read from file.\n");
        fclose(fptr);
        return 1;
    }
    fclose(fptr);

     fptr=fopen("vowels.txt","w");
    int v=vowels(buffer);
    fprintf(fptr,"Vowel cnt: %d",v);
     fclose(fptr);
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
