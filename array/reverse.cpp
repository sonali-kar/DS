 #include<iostream>
 using namespace std;
 int reverse(int arrA[],int n)
 {
       int arrB[50],i,j;
       for(i=n-1, j=0 ;i>=0; i--,j++)
       {
            // for(j=0; j>=n;j++)
             //{


             arrB[j]=arrA[i];
             }
       //}
       for(i=0;i<n;i++)
       {
             arrA[i]=arrB[i];
       }
 }

 int main()
 {
       int n,i,arrA[50];
       cout<<"enter no of elements";
       cin>>n;
       cout<<"enter elements";
       for( i=0;i<n;i++)
       {
             cin>>arrA[i];
       }
     reverse(arrA,n);
     cout<<"reverse array"<<endl;
     for(i=0;i<n;i++)
     {
         cout<< arrA[i]<<endl;
     }

       return 0;
 }
