#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    //print row wise
    cout<<"Row_wise"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    //print col wise
    cout<<endl;
    cout<<"Col_wise"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[j][i]<<" ";
        }cout<<endl;
    }

    cout<<endl;
     int brr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>brr[j][i];
        }
    }

    cout<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<brr[i][j]<<" ";
        }cout<<endl;
    }
}