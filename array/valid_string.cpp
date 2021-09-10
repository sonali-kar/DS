#include<iostream>
using namespace std;
bool validcheck(string str)
{
    for (int i = 0; str[i]!='\0'; i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z')
              || (str[i] >= 'A' && str[i] <= 'Z')
              || (str[i] >= '0' && str[i] <= '9')
              || str[i] == '_'))
            return false;
    }
    return true;
}
int main()
{
     string  str;
     cout<<"Enter the string  ";
     cin>>str;
     if(validcheck(str))
     {
           cout<<"valid";
     }
     else{
      cout<<"invalid";
     }
     return 0;
}
