#include<iostream>
using namespace std;
int main()
{
     char  str[20] ;
     int i,vcount =0, ccount=0;
     cout<<"Enter the string  ";
     cin>>str;
     for(i=0;str[i]!='\0';i++)
     {
           if(str[i] =='A'|| str[i]=='E'|| str[i]=='O'|| str[i]=='I'|| str[i]=='U'||str[i]=='a'|| str[i]=='e'|| str[i]=='o'|| str[i]=='i'|| str[i]=='u')
           {
                 vcount++;
           }
           else if ((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122))
            {
                  ccount++;
            }


     }
          cout<<"Number of vowels are" <<vcount<<endl;
            cout<<"Number of consonents are"<<ccount;
     return 0;
}
