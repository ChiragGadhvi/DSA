#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    // n =5
    // 1
    // 2 2
    // 3 3 3 
    // 4 4 4 4
    // 5 5 5 5 5

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=i){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}