#include<iostream>
using namespace std;

void Maximum(int a,int b,int c){
    if(a>b){
        if(a>c)
        cout<<a<<endl;
    }
    else if(b>a){
        if(b>c)
        cout<<b<<endl;
    }
    else{
        cout<<c<<endl;
    }
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    Maximum(a,b,c);
}