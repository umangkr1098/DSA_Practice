#include<bits/stdc++.h>
using namespace std;
int firstOcc(vector<int> v, int target)
{ int s=0;
  int e=v.size()-1;

  int mid = s + (e-s)/2;
  int ans = -1;

  while(s<=e)
  {
    if(v[mid]==target)
    {
       ans = mid;
       e = mid-1; 
    }
    else if(target > v[mid])
    {
      s = mid+1;
    }
    else if(target< v[mid])
    {
      e = mid-1;
    }

    mid = s +(e-s)/2;

  }
  return ans;
}

int lastOcc(vector<int> arr, int target)
{
    
    int s=0;
    int e=arr.size()-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
    if(arr[mid]==target){
        ans=mid;
        s=mid+1;
    }
    else if(target<arr[mid]){
        e=mid-1;
    }
    else if(target>arr[mid]){
        s=mid+1;
    }
   
    mid = s+(e-s)/2;    

    }
 return ans;
    
}

int main(){
    vector<int> v{1,3,4,4,4,4,6,7};
    int target=4;

    int indOfFirstOccur= firstOcc(v,target);
    int indOfLastOccur= lastOcc(v,target);

    

    cout<<" First occurence is at index: "<<indOfFirstOccur<<endl;
    cout<<" Last occurence is at index: "<<indOfLastOccur<<endl;

    auto anss = lower_bound(v.begin(),v.end(),target);
    auto ans2 = upper_bound(v.begin(),v.end(),target);

     cout<<" First occurence is at index: "<<anss-v.begin()<<endl;
     cout<<" Last occurence is at index: "<<ans2-v.begin()-1<<endl;

    cout<<"Total no. of occurences: "<<indOfLastOccur - indOfFirstOccur+1;

    return 0;
}