#include<stdio.h>
#include <string.h>
//user defined
struct student {
int roll;
float cgpa;
char name[100];
};

void printInfo(struct student s1) ;
int main() {
struct student s1;
s1. roll = 1664;
s1.cgpa = 9.2;
//s1.name = "a";
strcpy(s1.name, "a");
printf("student name = %s\n", s1.name);
printf("student roll no = %d\n", s1.roll);
printf("student cgpa = %f\n", s1.cgpa);


struct student s2={2,8.2,"b"};
struct student *ptr;
ptr=&s2;
printf("student name = %s\n", (*ptr).name);
printf("student roll no -> %d\n", ptr->roll);
printf("student cgpa = %f\n", s2.cgpa);

printInfo(s1);
return 0;
}

void printInfo(struct student s1) {
printf("student information : \n");
printf("student.roll = %d\n", s1. roll);
printf("student.name = %s\n", s1.name);
printf("student.cgpa = %f\n", s1.cgpa);
}
