#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x = n;
    int num=0;
    while(n>0){
        int a = n%10;
        num += pow(a,3);
        n = n/10;
    }
    // cout<<num<<endl;
    // cout<<x<<endl;
    if(num==x){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not an Armstrong Number"<<endl;
    }
}