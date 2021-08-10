#include<iostream>
#include<math.h>
#include<string.h>
#include<cstdlib>
#include<stdio.h>

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
        int distance=0,dist=0,a=0,total=0;
        float angle=0,cosine=0,radian=0,perp=0,area=0;
        distance=v[i]*ti[i];
        dist= sqrt(pow(x[1] - x[0], 2) + pow(y[0] - y[1], 2) * 1.0);
        a=dist/2;
        total=a+distance;
        angle=(360/n)/2;
        radian = tan ( (angle * 3.14) / 180.0 );
        perp = radian*total;
        area=n*perp*total;
        cout<<fixed;
        cout<<area<<endl;
   }
  }
}