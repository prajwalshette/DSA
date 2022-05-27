
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
         int n;
         cin>>n;

         int arr[n];
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
         }

         int m;
         cin>>m;

         sort(arr,arr+n);
         int min = INT_MAX;

         for(int i=0;i+m-1<n;i++)
         {
             int d=arr[i+m-1]-arr[i];
             if(d<min)
             {
                 min=d;
             }
         }
         cout<<min<<endl;

    }
    return 0;

}