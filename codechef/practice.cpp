#include<iostream>
using namespace std;
int main()
{
	int t,basic, hra,da,i;
	cin>>t;
	float gross;
	for(i=0;i<t;i++)
	{
		cin>>basic;
		if(basic<1500)
		{
			gross=basic*2;
			cout<<gross<<endl;

		}
		else{
			gross=(0.98*basic)+500+basic;
			printf("%.2f\n",gross);

		}
	}
	return 0;
}