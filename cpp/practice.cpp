#include <iostream>
using namespace std;

int main() {
 
    int n,last_num,sum = 0,temp;
    cin>>n;
    temp = n;
 
    while(temp > 0)
    {
        last_num = temp %10;
        sum = sum + last_num;
        temp = temp/10;
    }
    cout<<sum;
    return 0;
}