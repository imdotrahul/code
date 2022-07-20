#include<iostream>
using namespace std;

int findsqrt(int n) //find till int number not till precision by using binary search
{
    long long int start = 0;
    long long int end = n;
    long long int mid  = start + (end - start)/2;
    int ans = -1;

    while(start<=end)
    {
        long long int square = mid * mid;
        if(square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else 
        {
            end = mid -1;
        }
        mid  = start + (end - start)/2;

    }
    return ans;
}

double tillprecision(int n,int withoutprecision,int tillprecision) // after precision value
{
    double ans = withoutprecision;
    double factor = 1;

    for(int i =0;i<tillprecision;i++)
    {
        factor = factor /10;
        for(double j = ans;j*j<n; j = j+factor)
        {
            ans = j;

        }

    }
    return ans;
}


int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int withoutprecision = findsqrt(n);
        cout << withoutprecision<<"\n";
        
        int giveprecisionvalue;
        cin>>giveprecisionvalue;

        double afterprecision = tillprecision(n,withoutprecision,giveprecisionvalue);
        cout<< afterprecision<<"\n";
    }

}