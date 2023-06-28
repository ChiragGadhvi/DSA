#include<bits/stdc++.h>
using namespace std;

int setbit(int n,int s){
    return (n | (1 << s));
}

int main(){

    cout<<setbit(5,1);

    return 0;
}