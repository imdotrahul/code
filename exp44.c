#include<stdio.h>
int main()
{
    int n, i=0,max=0,counter=0,l[2],m=0;
    int frequency[4]={0,0,0,0};

    printf("hey, sir/mam this is a survey regarding the common issue of many people that they are unable to catch the train many of the times so we just want you to give youfeedback reagarding this. you need to select one option from the given and tell us about what we can do in such a situation.\n");

    char a ='a', ch, ar[][60]={"rush to train to catch it and inform T.T at next stop",
    "catch the train and perfom journey without ticket",
    "purchase the ticket first and wait for next train",
    "miss the train and take ticket fro next train"};
    printf("\n\nenter the number of people who took the survey");
    scanf("%d",&n);
    for(i=0;i<4;i++)
    {
        printf("%c. %s\n",a,ar[i]);
        a++;
    }
    i=0;
    do{
        printf("enter your choice:");
        scanf("\n%c",&ch);
        if(ch=='a'){
            frequency[0]++;
        }
        else if(ch=='b'){
            frequency[1]++;
        }
        else if(ch=='c'){
            frequency[2]++;
        }
         else if(ch=='d'){
            frequency[3]++;
        }
        else{
            printf("invalid choice\n");
        }
        i++;
    
    }
    while(i<n);
    printf("\n frequencies of a,b,c,d are:");
    for(i=0;i<4;i++){
        printf("%d",frequency[i],ch);

    }
    for(i=0;i<4;i++){
        if(max<frequency[i]){
            max=frequency[i];
        }
    }
    for(i=0;i<4;i++){
        if(frequency[i]%max<1&&frequency[i]!=0){
            ++counter;
        }
    }
    if(counter==1){
        for(i=0;i<4;i++){
            if(max==frequency[i]){
                printf("\n most of the people will%s",ar[i]);
            }
        }
    }
    else if(counter==2){
        for(i=0;i<4;i++){
            if(max==frequency[i]){
                l[m]=i;
                m++;
            }
        }
        printf("\npeople will either %s or %s",ar[l[0]],ar[l[1]]);
    }
    else{
        printf("\n no conclusion");
    }
    return 0;

    

}