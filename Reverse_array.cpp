#include<bits/stdc++.h>
using namespace std;
void rev(int arr[],int n){
        int a;
     for(int i=0;i<n/2;i++){
    a=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=a;
     }
    
}


int main(){
 int n;
 cin>>n;
  
 int arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
rev(arr,n);
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }

return 0;
}