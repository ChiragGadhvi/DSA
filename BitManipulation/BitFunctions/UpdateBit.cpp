#include<bits/stdc++.h>
using namespace std;

int updatebit(int n,int pos,int val){
    int mask = ~(1 << pos);
    n = n&mask;
    return (n | (val<<pos));
}

int main(){

    cout<<updatebit(5,1,1);

    return 0;
}