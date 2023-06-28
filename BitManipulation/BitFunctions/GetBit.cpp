#include<bits/stdc++.h>
using namespace std;

int getbit(int n,int s){
    return ((n & (1 << s))!=0);
    // return (n & (1 << s));
}

int main(){

    cout<<getbit(5,2);

    return 0;
}