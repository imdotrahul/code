#include<iostream>
#include<string.h>
=using namespace std;
 
// Function to check if it is possible
// to convert the string into palindrome
bool checkPalindrome(string str){
     
    int n = str.length();       
   
    // Counting number of characters
    // that should be changed.
    int count = 0;
    for (int i = 0; i < n/2; ++i)
        if (str[i] != str[n - i - 1])
            ++count;
     
    // If count of changes is less than
    // or equal to 1
    return (count <= 1);
}
 
// Driver function.
int main()
{
    string str = "abccaa";   
    if (checkPalindrome(str))
       cout << "Yes" << endl;
    else
       cout << "No" << endl;
     
    return 0;
}