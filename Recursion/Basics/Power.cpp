#include<bits/stdc++.h>
using namespace std;

int Power(int n,int p){
    if(p == 0){
        return 1;
    }
    int prePow = Power(n,p-1);
    return n*prePow;
}

int main(){
    
    int n,p;
    cin>>n>>p;
    cout<<Power(n,p);
    return 0;
}