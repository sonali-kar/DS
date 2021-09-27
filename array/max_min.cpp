#include<iostream.>
using namespace std;
int main()
{
      int arr[100],i,n;
      cout<<"enter no of elements";
      cin>>n;
      for(i=0;i<n;i++)
      {
            cin>>arr[i];
      }
      int max = arr[0];
      int min = arr[0];

      for(i=0;i<n;i++){
      if(max<arr[i])
      {
            max = arr[i];
            }

     if(min>arr[i]);
     {
           min = arr[i];
           }
}
cout<<"max element"<<max<<endl;
cout<<"min element"<<min;
}
