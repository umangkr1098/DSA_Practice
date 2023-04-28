#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[][4], int n, int m, int target){
    int s=0;
    int e=n*m-1;
    int mid = s+(e-s)/2;

    while(s<=e)
    {   int rowInd = mid/m;
        int colInd = mid%m;

        if(arr[rowInd][colInd]== target){
            cout<< " Found at "<<rowInd<< " "<<colInd<<endl;
            return true;
        }

        if(arr[rowInd][colInd] < target)
        {
           s=mid+1;
        }

        else{
           e=mid-1;}

    mid = s+(e-s)/2;
    }
  return false;
}


int main(){
    int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int rows=5;
    int cols=4;

    int target = 9;

    bool ans = binarySearch(arr,rows,cols,target);


    if(ans){
        cout<<"Found"<<endl;

    }
    else
    cout<<"Not Found"<<endl;

} 