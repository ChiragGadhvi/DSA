#include<bits/stdc++.h>
using namespace std;

int CountPathsMaze(int n,int i,int j){
    if(i == n-1 && j == n-1){
        return 1;
    }
    if(i>= n || j>=n){
        return 0;
    }
    return CountPathsMaze(n,i+1,j) + CountPathsMaze(n,i,j+1);
}

int Solve(int n){
    int i=0,j=0;
    if(i == n-1 && j == n-1){
        return 1;
    }
    if(i>= n || j>=n){
        return 0;
    }
    return CountPathsMaze(n,i+1,j) + CountPathsMaze(n,i,j+1);
}

int main(){

    // cout<<CountPathsMaze(9,0,0)<<endl;

    cout<<Solve(3)<<endl;


    return 0;
}