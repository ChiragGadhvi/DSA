#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int rowst = 0;
    int rowend = n-1;
    int colst = 0;
    int colend = m-1;

    while(rowst <= rowend && colst <= colend){

        for(int i = colst;i<=colend;i++){
            cout<<arr[rowst][i]<<" ";
        }
        rowst++;

        for(int i = rowst;i<=rowend;i++){
            cout<<arr[i][colend]<<" ";
        }
        colend--;

        for(int i= colend;i>=colst;i--){
            cout<<arr[rowend][i]<<" ";
        }
        rowend--;

        for(int i= rowend;i>=rowst;i--){
            cout<<arr[i][colst]<<" ";
        }
        colst++;

    }
    return 0;
}