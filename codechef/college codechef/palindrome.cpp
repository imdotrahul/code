#include<iostream>
#include<string.h>
using namespace std;
bool checkPalindrome(string str){
     
    int n = str.length();   
    int count = 0;
    for (int i = 0; i < n/2; ++i)
        if (str[i] != str[n - i - 1])
            ++count;
    return (count <= 1);
}
int main()
{
    string str = "abccaa";   
    if (checkPalindrome(str))
       cout << "Yes" << endl;
    else
       cout << "No" << endl;
     
    return 0;
}