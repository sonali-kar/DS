
#include<iostream>
using namespace std;
int fib(int n)
{
      if(n==0)
            return 0;
            else if(n==1)
                  return 1;
      else
            return (n-2)+(n-1);

}
int main()
{
      int n,r;

      cout<<"Enter the number of terms ";
      cin>>n;
       r=fib(n);
       cout<<"The sum upto "<<n<<" terms is "<<r;
      return 0;
}

