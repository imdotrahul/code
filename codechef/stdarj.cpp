#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, cnt0, cnt1, flage = 1;
        string str1; cin >> n >> str1;
        cnt0 = cntval(str1, '0'), cnt1 = cntval(str1, '1');
        if (min(cnt0, cnt1) == 0) flage = 0;
        if (min(cnt0, cnt1) >= 2) {
            int move = cnt0 + cnt1 - 2 * min(cnt0, cnt1);
            if (move % 2 == 0) flage = 0;
        }
        wrt(flage ? "Alice" : "Bob");
    }
}
