#include<bits/stdc++.h>
using namespace std;

int findUnique(vector<int> arr){
    int ans=0;
    for(int i=0; i<arr.size();i++){
     ans = ans^arr[i];   
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements: ";
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];

    }

    int unique_element = findUnique(arr);
    cout<<"Unique element is: "<<unique_element<<endl;
}