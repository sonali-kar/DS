#include<iostream>
using namespace std;
int fact(int n)
{
      if(n==0)
            return 1;
      else
            return fact(n-1)*n;

}
int main()
{
      int n;
      cout<<"Enter the value for n ";
      cin>>n;
      n=fact(n);
      cout<<n;
      return 0;
}

