#include<iostream>
using namespace std;
int linearsearch(int a[],int n,int key)
{
      for(int i=0;i<n;i++)
      {
            if(key==a[i])
                  return i;
      }
                  return -1;

        }

int main(void)
{
int n,i,key,result;
cout<<"enter no of elements";
cin>>n;
int a[n];
cout<<"enter elements";
for(i=0;i<n;i++)
{
      cin>>a[i];
}
cout<<"enter element to be searched";
cin>>key;
result=linearsearch(a,n,key);
cout<<result;
return 0;
}
