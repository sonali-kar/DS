#include<iostream>
using namespace std;
void insert(int arr[],int n,int key)
{
    int i=n-1;
      while(i>=0 && arr[i]>key)
      {
            arr[i+1]=arr[i];
            i--;
      }
      arr[i+1]=key;

}
int main()
{
      int n,key,i ,arr[100];
      cout<<"Enter the number of elements"<<endl;
      cin>>n;
      cout<<"Enter the elements"<<endl;
      for(i=0;i<n;i++)
      {
            cin>>arr[i];
      }
      cout<<"enter the element to be inserted"<<endl;
      cin>>key;
      insert(arr,n,key);
      cout<<"array is"<<endl;
      for(i=0;i<n;i++)
      {
            cout<<arr[i]<<endl;
      }
      return 0;

}
