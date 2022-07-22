#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool  ispossible(vector<int> &stalls, int k,int mid)
{
    int cowcount = 1;
    int lastpos = stalls[0]; //lastposition


    for(int i =0;i<stalls.size();i++)
    {
        if(stalls[i]-lastpos >=mid)
        {
            cowcount++;
            if(cowcount==k)
            {
                return true;
            }
        }
    }
    return false;
}


int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int s = 0; //start
    int maxi = -1;
    for(int i =0;i<stalls.size();i++)
    {
        maxi = max(maxi,stalls[i]);
    }
    int e = maxi; //end
    int mid = s + (e-s)/2;
    int ans = 0;

    while(s<=e)
    {
        if(ispossible(stalls,k,mid))
        {
            ans = mid;
            s = mid +1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;

    }
    return ans;

}

int main()
{
    vector<int> stalls;

    int size= 10,k=2,temp;
    for(int i =0;i<size;i++)
    {
        cin>>temp;
        stalls.push_back(temp);

    }
    int result = aggressiveCows(stalls,k);
    cout<<result;

}