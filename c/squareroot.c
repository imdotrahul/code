#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int n, char gender) {
    int i,arr[1000];
    for(i=0;i<n;i++)
    {

    }
}

int main() {
    int n;
    char gender;
    int sum;
  
    scanf("%d", &n);
    int *marks = (int *) malloc(n * sizeof (int));
 
    for (int student = 0; student < n; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, n, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}