#include<iostream>
using namespace std;

bool IsPrime(int number){
    if(number <= 1){
        return false;
    }
    for(int i=2;i<number;i++){
        if(number%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    if(IsPrime(n)){
        cout<<"Prime Number"<<endl;
    }
    else cout<<"Non Prime Number"<<endl;
    return 0;
}