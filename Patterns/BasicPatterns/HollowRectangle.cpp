#include<iostream>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;

    // row = 4 col = 4
    // * * * *
    // *     *
    // *     *
    // * * * *

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<"*"<<" ";
            }
            else{
                cout<<"  "; // Use a extra space here
            }
        }
        cout<<endl;
    }
    return 0;
}