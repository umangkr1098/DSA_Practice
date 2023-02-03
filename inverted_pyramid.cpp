#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int row=0; row<n;row++){
        for(int col=0;col<row;col++){
            cout<<" ";
        }

        for(int i=0;i<n-row;i++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
}