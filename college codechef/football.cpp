#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int score=0;
        for(int i=0;i<n;i++){
            if((a[i]*20)-(b[i]*10)>score){score=(a[i]*20)-(b[i]*10);}
        }
        cout<<score<<"\n";
    }
}