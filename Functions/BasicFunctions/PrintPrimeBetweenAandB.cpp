#include<iostream>
#include<cmath>
using namespace std;

bool Prime(int a){
    for(int i=2;i<sqrt(a);i++){
        if(a%i==0)
            return false;
    }
    return true;
}

int main(){
    int a,b;
    cin>>a>>b;

    // if(Prime(n)){
    //     cout<<"Prime"<<endl;
    // }
    // else{
    //     cout<<"Non Prime"<<endl;
    // }

    for(int i=a;i<b;i++){
        if(Prime(i)){
            cout<<i<<" ";
        }
        else 
         continue;
    }

    return 0;
}