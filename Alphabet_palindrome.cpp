#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i,j;
    char m='A';
    for(int i=1;i<=n;i++){
        char m='A';
        for(j=1;j<=i;j++){
            cout<<m;
            m=m+1;
        }
        j=j-1;
        m=m-1;
        for(j=i-1;j>=1;j--){
            m=m-1;
            cout<<m;
            //m=m-1;
        }
        
       cout<<endl;  
    }

  
}