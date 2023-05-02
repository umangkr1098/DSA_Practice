 #include<bits/stdc++.h>
 using namespace std;
 
 int main(){
     vector<int> arr{1,2,3,4,5,6};
     vector<int> brr{3,4,7,8,2}; 
     int j;
     vector<int> ans;
     for(int i=0;i<arr.size();i++){
         ans.push_back(arr[i]);
        for( j=0;j<brr.size();j++){
            if(arr[i]==brr[j]){
                brr[j]=INT_MIN;
            }
        }
         

     }
       for( j=0;j<brr.size();j++){
        ans.push_back(brr[j]);
       }
  
     for(int i=0;i<ans.size();i++){
        if(ans[i]!= INT_MIN){
        cout<<ans[i]<<" ";
        }
     }
 }
