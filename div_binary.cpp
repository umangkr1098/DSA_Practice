#include<bits/stdc++.h>
using namespace std;

int solve(int dividend, int divisor)
{
    int s=0;
    int e=abs(dividend);
    int ans;
     
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(abs(mid*divisor) == abs(dividend))
        {
            // if((divisor<0)&&(dividend<0) || (divisor>0)&&(dividend>0)){
            //     return mid;}
            // else
            //      return -mid;
            ans=mid;
            break;  
        }
        if(abs(mid*divisor)> abs(dividend))
         e=mid-1;

        if(abs(mid*divisor)<abs(dividend)) 
        {
            ans=mid;
            s=mid+1;

        }

        mid=s+(e-s)/2;

    }
    if((divisor<0)&&(dividend<0) || (divisor>0)&&(dividend>0)){
       return ans;}
    else
     return -ans;

}

int main(){
    int dividend =2147483648;
    int divisor = -1;

    int ans = solve(dividend, divisor);
    cout<<"Ans is: "<<ans<<endl;

}