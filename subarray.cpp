
#include<iostream>
using namespace std;
int main()
{
      int n;
      cout<<"enter size of array";
      cin>>n;
      int arr[n];
      cout<<"enter elements";
      for(int i=0;i<n;i++)
      {
            cin>>arr[i];
      }
      int sum=0;
      for(int i=0;i<n;i++)
      {
            sum=0;
            for(int j=i;j<n;j++)
            {
                  sum = sum+arr[j];
                  cout<<sum<<endl;
            }
      }
}
