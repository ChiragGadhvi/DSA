#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // int maxsum = INT_MIN;
    // int sum;

    // Brute Force Approach

    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         sum = 0;
    //         for(int k=i;k<=j;k++){
    //             // cout<<arr[k]<<" ";
    //             sum += arr[k];
    //             maxsum = max(maxsum,sum);
    //         }
    //     }
    // }

    // Cumulative sum approach

    // int currSum[n+1];
    // currSum[0] =0;

    // for(int i=1;i<=n;i++){
    //     currSum[i] = currSum[i-1] + arr[i-1];
    // }

    // for(int i=1;i<=n;i++){
    //     cout<<currSum[i]<<" ";
    // }

    // int maxSum = INT_MIN;
    
    // for(int i=1;i<=n;i++){
    //     int sum = 0; 
    //     for(int j=0;j<i;j++){
    //         sum = currSum[i] - currSum[j];
    //         maxSum = max(sum,maxSum);
    //     }
    // }


    // Kandane's Algorithm

    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i=0;i<n;i++){
        currSum += arr[i];
        if(currSum<0){
            currSum = 0;
        }
        maxSum = max(maxSum,currSum);
    }

    cout<<maxSum<<endl;
    // cout<<maxsum<<endl;
    return 0;
}