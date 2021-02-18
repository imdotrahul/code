#include<stdio.h>
#include<stdlib.h>
char name[100];
int emp_id;
int num_work_days;
char doj[20];
int salary;
long long contact_num;
char designation[20];
char deptt[20];
int mon_salary;
void input_data();
void calc_salary();
void display();

int main()
{
    input_data();
    calc_salary();
    display();
    return 0;
}
void input_data()
{
    printf("enter name of the employee:");
    scanf("%s",&name);
    printf("enter employee id of the employee:");
    scanf("%d",&emp_id);
    printf("enter number of working days:");
    scanf("%d",&num_work_days);
    printf("enter date of joining:");
    scanf("%s",&doj);
    printf("enter salary:");
    scanf("%d",&salary);
    printf("enter contact number:");
    scanf("%lld",&contact_num);
    printf("enter designation:");
    scanf("%s",&designation);
    printf("enter deptt:");
    scanf("%s",&deptt);


    printf("\n name is:%s",name);
    printf("\n employee id is:%d",emp_id);
    printf("\n number of working days are:%d",num_work_days);
    printf("\n date of joining is:%s",doj);
    printf("\n salary is:%d",salary);
    printf("\n contact num is:%lld",contact_num);
    printf("\n designation is:%s",designation);
    printf("\n deptt is:%s",deptt);

}
void calc_salary()
{
    mon_salary=salary/30*num_work_days;
}
void display()
{
    int deduct;
    printf("\n monthly salary of %s is: %d",name,mon_salary);
    printf("\n enter the deduction of salary if any:");
    scanf("%d",&deduct);
    mon_salary=mon_salary-deduct;
    printf("\n monthly salary of %s is: %d",name,mon_salary);

}
