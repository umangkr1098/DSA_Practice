#include<bits/stdc++.h>
using namespace std;

int main(){
 int arr[5];
 fill_n(arr,5,7);
 for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
 }   
 cout<<endl;
 cout<<"The size of array is: "<<sizeof(arr)<<" ";
}