#include<bits/stdc++.h>
using namespace std;

int solve(int s,int e){
    if(s == e){
        return 1;
    }
    if(s > e){
        return 0;
    }
    int ans=0;
    for(int i=1;i<=6;i++){
        ans+=solve(s+i,e);
    }
    return ans;
}

int main(){

    cout<<solve(0,4)<<endl;

    return 0;
}