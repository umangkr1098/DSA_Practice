#include<bits/stdc++.h>
using namespace std;

void Transpose(int arr[][3],int rows,int cols, int transposearr[][3])
{
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
         transposearr[j][i]=arr[i][j];
        }
       
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
     int arr[3][3]=
       {
        {1,2,3},
        {4,12,6},
        {7,8,9}
       };
     int rows=3;
     int cols=3;
     int transposearr[3][3];
    Printarr(arr,rows,cols);
    cout<<endl;
    Transpose(arr,rows,cols,transposearr);

     Printarr(transposearr,rows,cols);
    
    
}