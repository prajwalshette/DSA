
// Write a program to reverse an array or string
#include<bits/stdc++.h>
using namespace std;
vector<int>reverse(vector<int>v){

  int s=0 ,e=v.size()-1;
  while (s<=e)
  {
     swap(v[s],v[e]);
     s++;
     e--;
  }
  return v;

}
void print(vector<int> v){
  for (int i = 0; i < v.size(); i++)
  {
     cout<<v[i]<<" ";
  }
  cout<<endl;
  
}

int main(){
  vector<int>v;

  v.push_back(11);
  v.push_back(7);
  v.push_back(3);
  v.push_back(12);
  v.push_back(4);

  vector<int> ans=reverse(v);

  cout<<"printing reverse array:";
  print(ans);


}



// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,i;
//     cin>>n;
//     int arr[n];
//     for(i=0;i<n;i++)
//     {
//        cin>>arr[i]; 
//     }
//     for(i=n-1;i>=0;i--)
//     {
//         cout<<arr[i];
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str;
//     cin>>str;
//     reverse(str.begin(),str.end());
//   cout<<str<<endl;

// }
