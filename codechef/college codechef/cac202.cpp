#include <bits/stdc++.h>
using namespace std;

int main() {
 ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n,c,ptr=0;
	    cin>>n;
	   	vector <bool> v(n+1);   
	    stack<int>s;
	    for(int i=0;i<n;i++)
	    {
	       cin>>c;
	       if(ptr<c)
	       {
	           cout<<c<<" ";
	           ptr++;
	           while(ptr<c)
	           {
	               s.push(ptr++);
	           }
	       }
	     v[c]=1;
	        while(!s.empty() && v[s.top()])
	      {
	        cout<<s.top()<<" ";
	        s.pop();
	      }
	    }
	    
	   
	   cout<<"\n";
	    	}
	return 0;
}