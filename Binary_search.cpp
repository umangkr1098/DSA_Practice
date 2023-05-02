 #include<bits/stdc++.h>
 using namespace std;

 int binarySearch(int arr[], int size, int target)
 {
    int start=0;
    int end = size-1;
    int mid = start+(end-start)/2;

    while(start<=end)
    {
        int element=arr[mid];

        if(element==target)
        {
            return mid;
        }
        else if(target<element)
        {
            end = mid-1;
        }
        else{
            start =mid+1;
        }
        mid =start+(end-start)/2;
    }
 return -1;

 }
 
 int main(){
    // int arr[] = {2,4,6,8,10,12,14};
    // int size = 7;
    // int target =12;

    // int indexOftarget = binarySearch(arr,size,target);

    // if(indexOftarget ==-1)
    // {
    //     cout<<" Target not found "<<endl;

    // }
    // else{
    //     cout<<" Target found at "<<indexOftarget << endl;
    // }
    vector<int> v{1,2,3,4,5,6,7,8};
    int arr[]={1,2,3,4,5,6,7,8};
    int size=7;
    if(binary_search(arr,arr+size, 7 ))
    {
        cout<<"Found "<<endl;
    } 
    else
    {
        cout<<"Not Found"<<endl;
    }
     return 0;
 }