#include<stdio.h>
float avg_ht(int age[], int n);
int main()
{
    int age[50], n, i;
    float ah;
    printf("enter number students in class");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("\n enter age of students: %d:",i+1);
        scanf("%d",&age[i]);
    }
    ah=avg_ht(age,n);
    printf("verage height of class is: %f",ah);
    return 0;   
}
float avg_ht(int age[], int n)
{
    int h[n], i;
    float avg, sum=0.0;
    for ( i = 0; i < n; i++)
    {
        if(age[i]==16)
        h[i]==168;
        else if(age[i]==17)
        h[i]==170;
        else if(age[i]==18)
        h[i]==172;
        else if(age[i]==19)
        h[i]==175;
        sum=sum+h[i];
        avg=sum/n;

    }
    return avg;
    
}