#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // int counter = 1;
    // while(counter < n){
    //     for(int i=0;i<n-counter;i++){
    //         if(arr[i] > arr[i+1]){
    //             int temp= arr[i+1];
    //             arr[i+1] = arr[i];
    //             arr[i] = temp;

    //         }
    //     }
    //     counter++;
    // }

    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j] > arr[j+1]){
                int temp= arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}