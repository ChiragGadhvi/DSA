#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
/*
    n = 5
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
*/
    // for(int i=1;i<=n;i++){
    //     int count = 1;
    //     for(int j=n;j>=i;j--){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}