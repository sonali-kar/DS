#include<iostream>
using namespace std;

int LinearSearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key){
        return i;
        }
    }
        return -1;

}
int main()
{
    int n;
    cout<<"\nEnter size of array\n";
    cin>>n;
    int arr[n];
    cout<<"\n Enter elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"\nEnter element to be found\n";
    cin>>key;
    cout<<LinearSearch(arr,n,key)<<endl;
    return 0;
}
