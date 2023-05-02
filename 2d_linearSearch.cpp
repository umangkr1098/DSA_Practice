#include<bits/stdc++.h>
using namespace std;

void Printarr(int arr[][3], int rows,int cols)
{
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}

bool findKey(int arr[][3], int rows, int cols, int key)
{   //int count=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key){
                //cout<<"Key found at "<<i<<","<<j<<endl;
                //count++;
                //break;
                return true;
            }

        }
    }
   return false;
}

int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int rows=3;
    int cols=3;
    int key;
    cin>>key;
Printarr(arr,rows,cols);
cout<<endl;
if(findKey(arr,rows,cols,key)){
    cout<<"True"<<endl;
}
else{
    cout<<"False"<<endl;
}
  
}