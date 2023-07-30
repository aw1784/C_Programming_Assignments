#include <stdio.h>
int main()
{
    char name[100];
    char grade[3];
    printf("Enter Your name : ");
    fgets(name ,100 ,stdin);
    printf("Enter Your Grade: ");
    fgets(grade,3,stdin);
    fputs (name,stdout);
    fputs (grade,stdout);



}