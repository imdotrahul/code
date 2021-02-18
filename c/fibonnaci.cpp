#include <iostream>
using namespace std;

int main() {
    int n, a=0, b=1, c=0;
    int x[20],i,j=0,count=0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        
        if(i == 1) {
            cout << a << ", ";
            continue;
        }
        if(i == 2) {
            cout << b << ", ";
            continue;
        }
        c = a + b;
        a= b;
        b = c;
        
        cout << c << ", ";
    
    if((c-a)>1){
        for(i=a+1; i<c; i++)
        {
            x[j]=i;
            count++;
            j++;
        }
    }
    }
    cout<<"Missing numbers of the Fibonacci series are:"<<endl;
    for(j=0; j<count; j++)
    cout<< x[j] <<endl;
    return 0;
}
