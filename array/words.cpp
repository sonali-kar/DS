#include<iostream>
using namespace std;
int main()
{
     char str[100] ;
     int i,word=0;
     cout<<"Enter the string  ";
     cin>>str;
     for(i=0;str[i]!='\0';i++)
     {
           word++;
     }
     cout<<"Number of words is"<<word;
     return 0;
}

