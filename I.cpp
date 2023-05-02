#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=2;i++){
       for(int j=1;j<=n;j++){
        cout<<"* ";
       }
       cout<<endl;

    }

    for(int k=1;k<=n;k++){
        for(int t=1;t<=2;t++){
        cout<<"  ";
        }
        for(int t=1;t<=2;t++){
        cout<<"* ";
        }
        cout<<endl;
       }

     for(int i=1;i<=2;i++){
       for(int j=1;j<=n;j++){
        cout<<"* ";
       }
       cout<<endl;

     }

     
}