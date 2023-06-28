#include<bits/stdc++.h>
using namespace std;

int Friends(int n){

    if(n == 0 || n==1 || n==2){
        return n;
    }

    return Friends(n-1) + Friends(n-2)*(n-1);

}

int main() {

    // your code goes here 
    cout<<Friends(4)<<endl;
    
    
    return 0;
}
