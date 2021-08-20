#include<iostream>
#include<math.h>
#include<string.h>
#include<cstdlib>
#include<stdio.h>
#define m_pi 3.141592653589793238462643383279502884


using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    double n,q;
    scanf("%lf %lf",&n,&q);
    int i,x[20],y[20], v[50],ti[50];
    for(i=0;i<n;i++)
    {
      scanf("%d %d",&x[i],&y[i]);
    }
     for(int j=0;j<q;j++)
    {
      scanf("%d %d",&v[j],&ti[j]);
    }
    for(int k=0;k<q;k++)
    {
        double distance=0,dist=0,a=0,total=0;
        double angle=0,tangent=0,prep=0,area=0;
        distance=v[k]*ti[k];
        dist= sqrt(pow(x[1] - x[0], 2) + pow(y[0] - y[1], 2));
        a=dist/2;
        total=a+distance;
        angle=(360/n)/2;
        tangent= tan((angle*m_pi)/180);
        prep = tangent*total;
        area=n*prep*total;
        cout<<fixed;
        cout<<area<<endl;
   }
  }
}