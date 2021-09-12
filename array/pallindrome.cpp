#include <iostream>
#include<string.h>
using namespace std;
int pallindrome(string s,int n)
{
      int i,j;
      string rev;
      for (int i=s.length()-1; i>=0; i--)
      {
            if(s[i]>=65 && s[i]<=90)
           s[i] = s[i]+32;
        rev +=s[i];
      }
        if(rev == s)
        {
              return true;
        }
        else
            return false;


}
int main()
{
      string s;
      int n;
     n= s.length();
      cout<<"enter the string";
      cin>>s;
      if(pallindrome(s,n))
      {
            cout<<"yes";
      }
      else
      {
            cout<<"no";
      }
      return 0;

}
