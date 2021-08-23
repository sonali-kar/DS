#include<iostream>
using namespace std;
int pow(int m,int n)
{
      if(n==0)
            return 1;
      else
            return pow(m,n-1)*m;

}
int main()
{
      int m,n,r;
      cout<<"Enter the value for m and n ";
      cin>>m>>n;
      r=pow(m,n);
      cout<<r;
      return 0;
}

