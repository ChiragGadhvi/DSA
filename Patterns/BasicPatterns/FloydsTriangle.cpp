#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 1;

    // n = 5
    // 1
    // 2  3 
    // 4  5  6 
    // 7  8  9  10
    // 11 12 13 14 15

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=i && i!=n){
                cout<<count<<"  ";
                count++;
            }
            else if(j<=i && i==n){
                cout<<count<<" ";
                count++;
            }
        }
        cout<<endl;
    }
    return 0;
}