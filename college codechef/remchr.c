#include <stdio.h>
#include <string.h>
void removeDuplicateChars(char str[])
{
    int l = strlen(str);
    int i, j = 0;
    for (i = 1; i <= l; i++)
    {
        while (str[i] == str[j] && (j >= 0))
        {
            i++;
            j--;
        }
        str[++j] = str[i];
    }
    int n = strlen(str);
    printf("%d \n", n);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char str[1000000];
        scanf("%s", str);
        removeDuplicateChars(str);
    }

    return 0;
}