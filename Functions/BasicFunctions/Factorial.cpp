#include<iostream>
using namespace std;

int fact(int n){
    int fact1 = 1;
    for(int i=2;i<=n;i++){
        fact1 = fact1*i;
    }
    return fact1;
}

// int fact(int n){
//     if(n==1 )
//         return 1;
//     else
//         return n*fact(n-1);
// }

int main(){
    int a;
    cin>>a;
    cout<<fact(a)<<endl;
}