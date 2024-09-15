#include<iostream>
#include <stack>
#include<algorithm>

using namespace std;

int main()
{
    int games;
    cin>>games;
    while(g--){
        int   a,b,maxsum;
        cin>> a>> b>> maxsum;

        int arr[a],brr[b];
        for(int i =0;i<a;i++)
        {
            cin>>arr[i];
        }
        for(int i =0;i<b;i++)
        {
            cin>>brr[i];
        }

        stack<int> a1;
        stack<int> b1;

        for(int i =a-1;i>=0;i--)
        {
            a1.push(arr[i]);
        }
        for(int i =b-1;i>=0;i--)
        {
            b1.push(brr[i]);
        }
        int sum = 0,count = 0;
        while(sum<=maxsum)
        {
            if(a1.top()<b1.top())
            {
                sum+=a1.top();
                a1.pop();
            }
            else if(b1.top()<a1.top())
            {
                sum+=b1.top();
                b1.pop();
            }
            count++;
        }
        cout<< count-1;
}

}