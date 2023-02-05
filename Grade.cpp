#include<bits/stdc++.h>
using namespace std;


char grade(int marks){
     switch(marks/10){
        case 10 :
        case 9 :return 'A';
        case 8 :return 'B';
        case 7 :return 'C';
        case 6 :return 'D';
        default : return 'E';

    }
}

int main(){
    int marks;
    cin>>marks;

   char ans= grade(marks);
   cout<<"Your grade is: "<<ans<<endl;
   
}