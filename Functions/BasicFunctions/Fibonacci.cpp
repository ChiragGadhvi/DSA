#include<iostream>
using namespace std;

void fibo(int a){
    int t1 = 0;
    int t2 = 1;
    int next;
    for(int i=0;i<a;i++){
        cout<<t1<<" ";
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    return;
}

int main(){
    int n;
    cin>>n;
    fibo(n);

    return 0;
}