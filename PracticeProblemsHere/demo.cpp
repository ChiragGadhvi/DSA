#include<iostream>
using namespace std;


// int main(){
//     int row,col;
//     cin>>row>>col;

//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=col;j++){
//             // cout<<"*"<<" ";  // Square Pattern

//             // if(j == 1 || j == col || i == 1 || i == row){ // Hollow Rectangle Pattern
//             //     cout<<"*"<<" ";
//             // }
//             // else{
//             //     cout<<"  ";
//             // }
//         }
//         cout<<endl;
//     }
// }

void fibo(int n){
    int f = 0;
    int s = 1;
    int nt;
    for(int i=0;i<n;i++){
        cout<<f<<" ";
        nt = f+s;
        f = s;
        s = nt;
    }
}

int main(){
    // int n;
    // cin>>n;

    // for(int i=n;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         // cout<<"*"<<" ";
    //         if(j > n-i){
    //             cout<<"*"<<" ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // int count = 1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(j <= i){
    //             cout<<count<<" ";
    //             count++;
    //         }
    //     }
    //     cout<<endl;
    // }

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*"<<" ";
    //     }
    //     int space = n*2 - 2*i;
    //     for(int j=1;j<=space;j++){
    //         cout<<" "<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=n;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*"<<" ";
    //     }
    //     int space = n*2 - 2*i;
    //     for(int j=1;j<=space;j++){
    //         cout<<" "<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }

    // for(int i=1;i<=n;i++){
    //     int j;
    //     for(j=1;j<=n-i;j++){
    //         cout<<"  ";
    //     }
    //     int k = i;
    //     for(;j<=n;j++){
    //         cout<<k--<<" ";
    //     }
    //     k = 2;
    //     for(;j<=n+i-1;j++){
    //         cout<<k++<<" ";
    //     }
    //     cout<<endl;
    // }

    int n;
    cin>>n;
    fibo(n);

}