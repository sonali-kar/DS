#include<iostream>
using namespace std;
int main()
{
      int mx=0;
      int n;
      cout<<"enter size of array";
      cin>>n;
      int arr[n];
      cout<<"enter elements";
      for(int i=0;i<n;i++)
      {
            cin>>arr[i];
      }
      for(int i=0;i<n;i++){
            mx=max(mx,arr[i]);
           cout<<mx<<endl;
      }
}
