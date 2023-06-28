#include<iostream>
using namespace std;

/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/

int fact(int a){
    if(a == 1 || a==0)
        return 1;
    else
        return a*fact(a-1);
}

int demo(int a,int b){
    int sum = fact(a)/(fact(b)*fact(a-b));
    return sum;
}

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<demo(i,j)<<" ";
        }
        cout<<endl;
    }
}