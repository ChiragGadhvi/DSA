#include<bits/stdc++.h>
using namespace std;

bool PairSum(int arr[],int n,int k){

    int sum = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] + arr[j] == k){
                sum = arr[i] + arr[j];
                cout<<arr[i]<<"+"<<arr[j]<<"="<<sum<<endl;
                return true;
            }
        }
    }
    return false;
}

bool PairSum2(int arr[],int n,int k){
    sort(arr,arr+n);
    int low = 0;
    int high = n;
    while(low<high){
        if(arr[low] + arr[high] == k){
            cout<<arr[low]<<"+"<<arr[high]<<"="<<arr[low]+arr[high]<<endl;
            return true;
            break;
        }
        else if((arr[low] + arr[high]) < k){
            low++;
        }
        else if((arr[low] + arr[high]) > k){
            high--;
        }
    }
    return false;
}

int main(){
    int arr[] = {2,4,7,11,14,16,20,21};
    int k = 31;

    cout<<PairSum2(arr,6,k);
    return 0;
}