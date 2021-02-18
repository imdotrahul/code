#include<stdio.h>
#include<string.h>
int main()
{
    char name[30][20];
    char ch;
    int i, n, found=0;
    printf("enter how many names you want to enter :");
    scanf("%d",&n);
    printf("enter name of %d friends",n);
    for (i = 0; i < n; i++)
    {
        scanf("%s",name[i]);
        printf("names are:");
    }
    for( i = 0; i < n; i++)
    {
        printf("%s\n",name[i]);
        printf("\nenter first character of names to be searched:");
        scanf("%c",&ch);
    }
    for ( i = 0; i < n; i++)
    {
        if(name[i][0]==ch)
        {
            found=1;
            break;
        }
    }
    if (found!=0)
    {
        printf("ame with first character %c is %s",ch,name[i]);
    }
    else
    {
        printf("name not found in given arrayof names");
    }
    
    
}