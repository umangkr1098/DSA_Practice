#include<bits/stdc++.h>
using namespace std;

int max(int n1,int n2, int n3){
    if(n1>n2 && n1>n3){
        return n1;
    }
    else if(n2>n3&&n2>n1){
        return n2;
    }
    return n3;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int findmax=max(a,b,c);
    cout<<findmax<<endl;
}