#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int k;
    cin>>k;

    int a=0,b=m-1;
    bool found = false;

    while(a < n && b >=0){
        if(arr[a][b] == k){
            found = true;
            break;
        }
        else if(arr[a][b] > k){
            b--;
        }
        else{
            a++;
        }
    }

    if(found){
        cout<<"Element Found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    return false;
}