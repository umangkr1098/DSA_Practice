#include<bits/stdc++.h>
using namespace std;

void printRowWiseSum(int arr[][3], int rows, int cols)
{
 for(int i=0;i<rows;i++)
   { int sum=0;
      for(int j=0;j<cols;j++)
     {
       sum = sum + arr[i][j];
     }
     cout<<sum<<endl;
   } 

}

void printColWiseSum(int arr[][3], int rows, int cols)
{
 for(int i=0;i<rows;i++)
   { int sum=0;
      for(int j=0;j<cols;j++)
     {
       sum = sum + arr[j][i];
     }
     cout<<sum<<endl;
   } 

}

void Printarr(int arr[][3], int rows,int cols)
{
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}

int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int rows=3;
    int cols=3;

    Printarr(arr,rows,cols);
    cout<<endl;

   for(int i=0;i<3;i++)
   { int sum=0;
      for(int j=0;j<3;j++)
     {
       sum = sum + arr[i][j];
     }
     cout<<sum<<endl;
   }
   cout<<endl;
cout<<"Using function"<<endl;
    
   printRowWiseSum(arr,rows,cols);
   cout<<endl;
   printColWiseSum(arr,rows,cols);

}