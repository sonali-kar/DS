#include<iostream>
using namespace std;
int negative(int arr[],int n)
{
      int i=0;
      int j=n-1;
      while(i<j)
      {
            while(arr[i]<0)
            {
                  i++;
            }
            while(arr[j]>0)
            {
                  j--;
            }
            if(i<j)
                  swap(arr[i],arr[j]);
      }
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
      negative(arr,n);
for(int i =0;i<n;i++)
{
      cout<<"rearraged array is"<<arr[i]<<endl;
}
}
