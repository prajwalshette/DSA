// Maximum and minimum of an array using minimum number of comparisons
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],i;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
     }
     sort(arr,arr+n);
      
        //   cout<<arr[i];
        cout<<"Minimum:"<<arr[0]<<endl;
        cout<<"Maximum:"<<arr[n-1];
        
}

 