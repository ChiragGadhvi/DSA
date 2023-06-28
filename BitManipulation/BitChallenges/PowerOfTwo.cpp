#include<bits/stdc++.h>
using namespace std;

// int powoftwo(int n){
//     int ans = n & (n-1);
//     if(ans == 0){
//         cout<<"Power of two"<<endl;
//     } else {
//         cout<<"Not Power of Two"<<endl;
//     }
//     return 0;
// }

bool powoftwo(int n){
    return (n && !(n & n-1));
}

int main(){

    cout<<powoftwo(64);
    return 0;
}