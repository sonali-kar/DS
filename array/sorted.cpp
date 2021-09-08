#include<iostream>
using namespace std;
int check(int arr[], int n)
{
      int i;
      for(i=0;i<n-1;i++)
      {
            if(arr[i]>arr[i+1])
                  return 0;
      }
      return 1;
}

int main()
{
      int n,i,arr[100];
      cout<<"enter number of elements"<<endl;
      cin>>n;
      cout<<"enter elements"<<endl;
      for(i=0;i<n;i++)
      {
            cin>>arr[i];
      }
      cout<<check(arr,n);
}
