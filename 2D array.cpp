#include<iostream>
using namespace std;
int main()
{

      int r,c;
      cout<<"Enter no of rows and columns";
      cin>>r>>c;
      int arr[r][c];
      for(int i=0;i<r;i++)
      {
            for(int j=0;j<c;j++)
            {
                  cin>>arr[i][j];
            }
      }
      cout<<"2D array is:"<<endl;
      for(int i=0;i<r;i++)
      {
            for(int j=0;j<c;j++)
            {
                  cout<<arr[i][j]<<" ";
            }
            cout<<endl;
      }


}
