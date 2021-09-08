#include<iostream>
using namespace std;
int merge(int arr1[],int arr2[],int m,int n)
{
      int i=0,j=0,arr3[100],k=0;
      while(i<m && j<n)
      {
            if(arr1[i]<arr2[j])
            {
                  arr3[k++]=arr1[i++];
            }
            else
                  arr3[k++]=arr2[j++];
      }
      for(;i<m;i++)
            arr3[k++]=arr1[i];
            for(;j<n;j++)
            arr3[k++]=arr2[j];
}
int main()
{
      int m,n,i,j,arr1[100],arr2[100],arr3[100];
      cout<<"enter number of elements for array 1 and array 2"<<endl;
      cin>>m>>n;
      cout<<"enter elements for array 1"<<endl;
      for(i=0;i<m;i++)
      {
            cin>>arr1[i];
      }
       cout<<"enter elements for array 2"<<endl;
      for(j=0;j<n;j++)
      {
            cin>>arr2[j];
      }
      merge(arr1,arr2,m,n);
      cout<<"merged array is";
for(i =0;i<m+n;i++)
{
      cout<<arr3[i]<<endl;
}
return 0;
}
