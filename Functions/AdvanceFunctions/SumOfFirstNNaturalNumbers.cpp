#include<iostream>
using namespace std;

int sum(int a){
    int result=0;
    result += a*(a+1)/2;
    return result;
}

int main(){
    int n;
    cin>>n;
    cout<<sum(n);
}