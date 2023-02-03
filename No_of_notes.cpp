#include<bits/stdc++.h>
using namespace std;

int main(){
    int amount;
    cin>>amount;

    int Rs100,Rs50,Rs20,Rs1;

    switch (1)
    {
    case 1: Rs100=amount/100;
            amount=amount%100;
            cout<<"No of Hundred Rupee note:"<<Rs100<<endl; 
            cout<<"-------------------------"<<endl;
   case 2: Rs50=amount/50;
            amount=amount%50;;
            cout<<"No of Fifty Rupee note:"<<Rs50<<endl;
            cout<<"-------------------------"<<endl; 
    case 3: Rs20=amount/20;
            amount=amount%20;
            cout<<"No of Twenty Rupee note:"<<Rs20<<endl;
            cout<<"-------------------------"<<endl;
    case 4: Rs1=amount/1;
            amount=amount%1;
            cout<<"No of One Rupee note:"<<Rs1<<endl;
            cout<<"-------------------------"<<endl;
    }
    cout<<"Total no of notes:"<<(Rs100+Rs50+Rs20+Rs1)<<endl;
}