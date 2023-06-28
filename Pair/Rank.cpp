#include<bits/stdc++.h>
using namespace std;

bool func(pair<int,int> p1,pair<int,int> p2){
    return p1.first<p2.first;
}

int main(){

    int arr[] = {23,45,11,22,19};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector< pair<int,int> > v;
    for(int i=0;i<n;i++){
        v.push_back(make_pair(arr[i],i));
    }
    sort(v.begin(),v.end(),func);
    for(int i=0;i<n;i++){
        arr[v[i].second] = i;
    }
    for(int i=0;i<n;i++){
        // arr[v[i].second] = i;
        cout<<arr[i]<<" ";
    }

    return 0;
}