#include<bits/stdc++.h>
using namespace std;

int main(){
//    vector<vector<int> > arr;

//    vector<int> a{1,2,3};
//    vector<int> b{4,5,6,4};
//    vector<int> c{7,8};

//    arr.push_back(a);
//    arr.push_back(b);
//    arr.push_back(c);
    
    vector<vector<int> > arr(4,vector<int>(5,121));

   for(int i=0;i<arr.size();i++){
    for(int j=0; j<arr[i].size(); j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }


}