#include<bits/stdc++.h>
using namespace std;

void desc(int n){
    if(n == 0){
        return ;
    }
    cout<<n<<" ";
    desc(n-1);
}

void asce(int n){
    if(n == 0){
        return ;
    }
    asce(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;
    asce(n);
    return 0;
}