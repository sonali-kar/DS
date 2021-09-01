#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int key)
{
      int l,mid,h;
     l=0;
     h=n;
     while(l<=h)
     {
           mid= (l+h)/2;
           if(key==a[mid])
            return mid;
           else if (key<a[mid])
            h= mid-1;
           else
            l=mid+1;
     }
     return -1;
}
int main(){
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
result=binarysearch(a,n,key);
cout<<result;
return 0;
}
