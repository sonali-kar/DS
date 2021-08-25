#include<iostream>
using namespace std;
int main()
{
      int A[5]={10,20,30,40,50};
      int *p;
      p=new int[5];
      p[0]=1;
      p[1]=2;
      p[2]=3;
      p[3]=4;
      p[4]=5;
      for(int i=0;i<5;i++)
            cout<<A[i]<<endl;
       for(int i=0;i<5;i++)
            cout<<p[i]<<endl;
            return 0;
}
