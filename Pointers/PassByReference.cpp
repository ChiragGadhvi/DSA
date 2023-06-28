#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int temp = *a;
        *a = *b;
        *b = temp;
}

int main(){

    int a = 10,b = 20;

    int *aptr = &a, *bptr = &b;

    // int temp = a;
    //     a = b;
    //     b = temp;

    cout<<a<<" "<<b<<endl;

    // swap(aptr,bptr);
    swap(&a,&b);

    cout<<a<<' '<<b<<endl;

    return 0;
}