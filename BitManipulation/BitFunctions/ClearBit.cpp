#include<bits/stdc++.h>
using namespace std;

int clearbit(int n,int s){
    return ((n & (~(1 << s))));
}

int main(){

    cout<<clearbit(5,2);

    return 0;
}