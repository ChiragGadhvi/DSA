#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s;
    cin>>s;

    // Brute force approach
    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     for(int j=i;j<n;j++){
    //         sum += arr[j];
    //         if(sum == s){
    //             cout<<i<<" "<<j<<endl;
    //             return 0;
    //         }
    //     }
    //     cout<<endl;
    // }

    // Two Pointer Approach
    int l = 0;
    int r =0;
    int sum = arr[0];
    while(r<n){
        if(sum == s){
            cout<<l+1<<" "<<r+1;
            return 0;
        }
        else if(sum < s){
            r++;
            if(r<n){
                sum += arr[r];
            }
        }
        else{
            sum -= arr[l];
            l++;
        }
    }
    return -1;
}