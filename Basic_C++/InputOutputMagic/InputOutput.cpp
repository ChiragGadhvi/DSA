#include<iostream>
using namespace std;
int main(){
    // Used to beautify input and output
    #ifndef DEMO
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);

    #endif

    int saving;
    cin>>saving;

    if(saving>5000){
        if(saving>10000){
            cout<<"Goa"<<endl;
        }
        else{
            cout<<"Paradise"<<endl;
        }
    } else if(saving>2000) {
        cout<<"Nayan"<<endl;
    } else if(saving<500){
        cout<<"Taruna"<<endl;
    }
}