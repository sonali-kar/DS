#include<iostream>
using namespace std;
int combination(int n, int r)
{
      if(r==0 || n==r)
      {
            return 1;
      }
      else
      {
            return combination(n-1,r-1)+combination(n-1,r);
      }
}
int main()
{
      int n,r,c;
      cout<<"Enter the values for n and r ";
      cin>>n>>r;
      c=combination(n,r);
      cout<<c;
      return 0;
}
