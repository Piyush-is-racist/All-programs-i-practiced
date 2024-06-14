#include<stdio.h>
#include <string.h>
 struct address1 {
    int hno;
    int block;
    char city[100];
    char state[100];

};
void printInfo(struct address1 add);
int main(){
    struct address1 add[2];
    printf("enter info for person 1 : ");
scanf("%d", &add[0].hno);
scanf("%d", &add[0].block);
scanf("%s", add[0].city);
scanf("%s", add[0].state);

 printf("enter info for person 2 : ");
scanf("%d", &add[1].hno);
scanf("%d", &add[1].block);
scanf("%s", add[1].city);
scanf("%s", add[1].state);

 printf("enter info for person 3 : ");
scanf("%d", &add[2].hno);
scanf("%d", &add[2].block);
scanf("%s", add[2].city);
scanf("%s", add[2].state);


printInfo(add[0]);
printInfo(add[1]);
printInfo(add[2]);
}

void printInfo(struct address1 add){

    printf("%d %d %s %s\n", add.hno, add.block , add.city, add.state);
}


