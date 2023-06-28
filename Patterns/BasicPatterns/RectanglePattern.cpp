#include<iostream>
using namespace std;
int main(){
    int row , col;
    cin>>row>>col;

    // row = 4 col = 4
    // * * * *
    // * * * *
    // * * * *
    // * * * *

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    return 0;
}