#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        if(i==1|| i==n){
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;}
    else{ 
        cout<<"* ";
        for(int t=1;t<=n-2;t++){
        cout<<"  ";
        }
        cout<<"*";
        cout<<endl;
    } 

    }


}