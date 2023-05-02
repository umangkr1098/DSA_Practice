#include<bits/stdc++.h>
using namespace std;

int findSqrt(int n)
{ int target = n;
int s=0;
int e=n;
int mid = s + (e-s)/2;
int ans;

while(s<=e)
{
    if(mid*mid==target)
       return mid;

    else if(mid*mid > target){
        e=mid-1;
    }   

    else {
        ans=mid;
        s=mid+1;
    }
  
   mid = s + (e-s)/2;
}
return ans;
}

int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    int ans = findSqrt(n);
    cout<<"Ans is: "<<ans<<endl;

    int precision;
    cout<<" Enter the numbr of floating digits in precision: "<<endl;
    cin>>precision;

    double step=0.1;
    double finalAns=ans;
    for(int i=0;i<precision;i++)
    {
      for(double j = ans;j*j<=n;j = j+step){
        finalAns=j;
      }
      step = step/10;
    }

    cout<<"Final answer is: "<<finalAns<<endl;
     
}