#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // O(n^2)
    for(int i=0;i<n-k+1;i++){
        int mx = arr[i];
        for(int j=i+1;j<=i+k-1;j++){
            // cout<<arr[j]<<" ";
            if(arr[j]>arr[i])
                mx = arr[j];
        }
        cout<<mx<<" ";
    }
}