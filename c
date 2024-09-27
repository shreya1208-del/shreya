#include<stdio.h>
#include<cono.h>
int main()
{
    int basic_salary, hra, da, allow, pf , total_salary;
    char grade;
    printf("enter the grade: ",grade);
    scanf(" %c", &grade);
    printf("enter the basic_salary" , basic_salary);
    scanf("%d",&basic_salary);
    hra = basic * (20/100);
    da = basic * (50/100);
    pf = basic * (11/100);
    if (grade=="A")
        allow = 1700;
    if(grade="B")
        allow = 1500;
    if (grade = "C")
        allow = 1300;
    total_salary=basic_salary+hra+da+allow-pf;
    printf("total_salary");
    return 0 :



}
