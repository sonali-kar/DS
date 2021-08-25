#include<iostream>
using namespace std;
int TOH(int n, int A,int B,int C)
{
      if(n>0)
      {
      TOH(n-1,A,C,B);
      cout<<"\n"<<A<<","<<C;
      TOH(n-1,B,A,C);
      }
}
int main()
{
      int n,A,B,C;
      cout<<"Enter the values for n and A,B,C ";
      cin>>n>>A>>B>>C;
      TOH(n,A,B,C);
      return 0;
}
