#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr{1,2,3,4,5,6,7};
    int sum;
    cin>>sum;
    for(int i=0;i<arr.size();i++){
        int element = arr[i];
        for(int j=i+1;j<arr.size();j++)
        {   if(element+arr[j]==sum)
            cout<<"("<<element<<","<<arr[j]<<")"<<endl;
        }
    }

    return 0;
}