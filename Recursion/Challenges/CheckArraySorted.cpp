#include<bits/stdc++.h>
using namespace std;


// Brute Force Approach
// bool CheckArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         if(arr[i] > arr[i+1]){
//             return false;
//         }
//     }
//     return true;
// }

bool CheckArray(int arr[],int n){
    if(n == 1){
        return true;
    }
    bool restArray = CheckArray(arr+1,n-1);
    return (arr[0]<arr[1] && restArray);

}

int main(){

    int arr[] = {1,2,3,4,5,3};
    cout<<CheckArray(arr,6)<<endl;
    return 0;
}