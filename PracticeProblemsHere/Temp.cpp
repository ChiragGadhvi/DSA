#include <iostream>
using namespace std;

// int Loop(int n)
// {
//     if (n >= 0)
//     {
//         cout << n << " ";
//     }
//     return Loop(n - 1);
// }

int Fact(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n*Fact(n-1);
}

int main()
{

    // cout << Loop(5) << endl;
    // for(int i=5;i>=0;i--){
    //     cout<<i<<" ";
    // }

    // cout<<Fact(10);
    
    // cout<<1e9<<endl;

    if((0.1 + 0.2) == 0.3){
        cout<<"True";
    }

    else 
        cout<<"False";

}