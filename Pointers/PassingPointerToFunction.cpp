#include<bits/stdc++.h>
using namespace std;

void increment(int &a){
    a++;
    // cout<<a+1<<endl;
    // return 0;
}

int main(){

    int a= 10;
    int *ptr = &a;
    increment(*ptr);
    cout<<a<<endl;

    return 0;
}