#include<iostream>
using namespace std;
double taylor(int x,int n)
{
      static double s=1;
      //double r;
      if(n==0)
            return s;
      else
           s=1+x*s/n;
           return taylor(x,n-1);

}
int main()
{
      double n,x,r;
      cout<<"Enter the value for n,x ";
      cin>>x>>n;
       r=taylor(x,n);
      cout<<r;
      return 0;
}

