#include<iostream>
using namespace std;
int main()
{
     char *str ;
     int i;
     cout<<"Enter the string  ";
     cin>>str;
     for(i=0;str[i]!='\0';i++)
     {
           if(str[i]>=65 && str[i]<=90)
           {
                 str[i]=str[i]+32;
           }
           else if(str[i]>=97 && str[i]<=122)
           {
                 str[i]=str[i]-32;
           }
           cout<<"After changing the cases  "<<str[i];
     }


     return 0;


}
