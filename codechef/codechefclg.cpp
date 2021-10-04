#include <iostream>
#include<stdio.h>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t, freq[150] = {0}, i, length;
    string s;
    bool isLapindrome;
    cin>>t;
    while(t--) {
    cin>>s;
    length = s.length();
    isLapindrome = true;
        for(i=0; i<length/2; i++) {
            freq[s[i]-'a']++;
        }
        for(i=(length+1)/2; i<length; i++) {
            freq[s[i]-'a']--;
        }
        for(i=0; i<26; i++) {
            if(freq[i]>0) {
                isLapindrome = false;
            
            freq[i] = 0;
        }
         if(isLapindrome) {
            cout<<"YES"<<endl;
        }
 
        else {
            cout<<"NO"<<endl;
        }
    }
    }
}