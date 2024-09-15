#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define f first
#define s second
#define all(a) a.begin(), a.end()

void op_vec(vector<int> &a){
	for(auto &i : a) cout<<i<<' ';
	cout<<'\n';
}

void abcd() {
	map<int,vector<int>> mp;
	int n;
	cin>>n;
	vector<int> a(n),res(n);
	set<int> seats;
	for(int i = 0 ; i < n ; i++){
		int x;
		cin>>x;
		x--;
		a[i] = x;
		mp[x].push_back(i);
	}
	
	for(auto &p : mp) reverse(all(p.second));
	
	
	for(int i = 0 ; i < 2*n ; i++){
		auto it = mp.upper_bound(i);
		if(it != mp.begin()){
			it--;
			res[it->second.back()] = i + 1;
			it->second.pop_back();
			if(it->second.empty()) mp.erase(it);
		}
	}
	op_vec(res);
	return;
	
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tt = 1;
    cin>>tt;
	while(tt--){
		// cout<<"Case #"<<i<<": ";
		abcd();
	}
    return 0;
}

