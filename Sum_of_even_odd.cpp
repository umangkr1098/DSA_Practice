#include<bits/stdc++.h>
using namespace std;
int Evensum(int n){
    int sum=0;
    for(int i=2;i<=n;i=i+2){
        sum = sum+i;
    }
    return sum;
}

int oddSum(int n){
    int sum=0;
    for(int i=1;i<=n;i+=2){
        sum = sum+i;
    }
    return sum;
}

int sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;

    }
    return sum;
}

int main(){
    int n;
    cin>>n;

    int ans=sum(n);
    cout<<"Sum is: "<<ans<<endl;

    int ans2 = Evensum(n);
    cout<<"Even Sum is: "<<ans2<<endl;
    
    int ans3 = oddSum(n);
    cout<<"Odd Sum is: "<<ans3<<endl;
    
}