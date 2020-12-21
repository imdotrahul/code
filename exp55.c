#include<stdio.h>
int main()
{
    float m;
    int n, count=0;
    printf("enter speed limit issued by the university:");
    scanf("%d",&m);
    printf("enter strenghth of class:");
    scanf("%d",&n);
    float dist[n],t[n];
    printf("enter %d student details..");
    for (int i=0;i<n;i++)
    {
        printf("\n%d distance(km)",i+1);
        scanf("%f",&dist[i]);
        printf("time(hr) :");
        scanf("%f",&t[i]);
    }
    for(int i=0;i<n;i++)
    if(m>=(dist[i]/t[i]))
    count++;
    else
    {
        count--;
    }
    if(count==n)
    printf("all studentd are following the guidelines");
    else if(-1*count==m)
    printf("no one is following the guidelines");
    else
    printf("some students are following the guidelines");
    return 0;
    

}