#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    /*
    n == 5
        
                * * * * *
              * * * * *
            * * * * *
          * * * * *
    */

    for(int i=1;i<=n;i++){
        int space = n - i;
        for(int i=1;i<=space;i++){
            cout<<" "<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}