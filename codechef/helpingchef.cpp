#include<iostream>
#include<math.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    double n,q;
    scanf("%lf %lf",&n,&q);
    int i,x[2000000],y[2000000], v[500000],ti[500000];
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
        double angle=0,cosine=0,radian=0,perp=0,area=0;
        distance=v[i]*ti[i];
        dist= sqrt(((x[1]*x[1])-(2*x[1]*x[0])+(x[0]*x[0]))+((y[1]*y[1])+(y[0]*y[0]) -(2*y[1]*y[0])));
        a=dist/2;
        total=a+distance;
        angle=360/(2*n);
        cosine=(angle*3.14)/180;
        radian = tan(cosine);
        perp = radian*total;
        area=n*perp*total;
        cout<<area<<endl;
   }
  }
}