#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char str[100];
    int i, l , d=0, lc=0, uc=0, s=0, count=0;
    printf("enter string:\n");
    scanf("%[^\n]s",str);
    l=strlen(str);
    for(i=0;i<l;i++) 
    {
        if(!isdigit(str[i]))
        d+=1;
        if(!islower(str[i]))
        lc+=1;
        if(!isupper(str[i]))
        uc=1;
        if(!(str[i]=='!' || str[i]=='@' || str[i]=='#'||  str[i]=='$' || str[i]=='%' || str[i]=='^' || str[i]=='&' || str[i]=='*' || str[i]=='(' || str[i]==')' || str[i]=='-' || str[i]=='+'  ))
        s+=1;

    }
    if(d==1)
    {
         count+=1;
    }  
    if(lc==1)
    {
        count+=1;
    }
    if(uc==1)
    {
        count+=1;
    }
    if(s==1)
    {
        count+=1;
    }
    if(count>6-l)
    {
        printf("password is strong with %d number of characters", l);
    }
    else
    {
        printf("umber of characters needs to be added are:%d",6-l);
    }
    return 0;
    
}