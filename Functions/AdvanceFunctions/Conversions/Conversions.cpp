#include<bits/stdc++.h>
#include<string>
using namespace std;

int BinaryToDecimal(int n){
    int ans = 0;
    int x = 1;
    while(n>0){
        int y = n%10;;
        ans = ans + x*y;
        x = x*2;
        n = n/10;
    }
    return ans;
}

int OctalToDecimal(int n){
    int ans = 0;
    int x = 1;
    while(n>0){
        int y = n%10;
        ans = ans + x*y;
        x = x*8;
        n = n/10;
    }
    return ans;
}

// int HexaDecimalToDecimal(string n){
//     int ans = 0;
//     int x = 1;
//     int s = n.size();
//     for(int i=s-1;i>=0;i--){
//         if(n[i]>= '0' && n[i]<='9'){
//             int demo = (n[i]-'0');
//             ans = ans + x*demo;
//             // cout<<demo<<endl;
//         }
//         else if(n[i]>='A' && n[i]<='F'){
//             int temp = (n[i] - 'A' + 10);
//             ans = ans + x*temp;
//             // cout<<temp<<endl;
//         }
//         x = x*16;
//     }
//     return ans;
// }

int HexaDecimaToDecimal(string n){
    int ans = 0;
    int x = 1;
    int s = n.size();
    for(int i=s-1;i>=0;i--){
        if(n[i] >='0' && n[i] <='9'){
            ans += x*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F'){
            ans += x*(n[i]-'A' + 10);
        }
        x = x * 16;
    }
    return ans;
}

// int DecimalToBinary(int n){
//     int ans = 0;
//     int x = 1;
//     while( x <=n ){
//         x = x*2;
//     }
//         x = x/2;
//     while( x > 0){
//         int last = n/x;
//         n = n - last*x;
//         x = x/2;
//         ans = ans * 10 + last;
//     }
//     return ans;
// }

int DecimalToBinary(int n){
    int count = 0, bin[100];
    for(int i=0;n>0;i++){
        bin[i] = n%2;
        n = n/2;
        count++;
    }
    for(int j=count -1;j>=0;j--){
        cout<<bin[j]<<" ";
    }
    return 0;
}

int DecimalToOctal(int n){
    int count = 0, bin[100];
    for(int i=0;n>0;i++){
        bin[i] = n%8;
        n = n/8;
        count++;
    }
    for(int j=count -1;j>=0;j--){
        cout<<bin[j];
    }
    return 0;
}

// string DecimalToHexadecimal(int n){
//     string ans = "";
//     int x = 1;
//     while(x <= n){
//         x *= 16;
//     }
//     x /= 16;

//     while(x>0){
//         int lastdigit = n/x;
//         n -= lastdigit*x;
//         x /= 16;

//         if(lastdigit <= 9){
//             ans = ans + to_string(lastdigit);
//         }
//         else{
//             char c = 'A' + lastdigit - 10;
//             ans.push_back(c);
//         }
//     }
//     return ans;
// }

string DecimalToHexadecimal(int n){
    int rem,temp,j=0;
    char hexa[50];
    temp = n;
    while(temp>0){
        rem = temp%16;
        if(rem < 10)
            hexa[j++] = 48 + rem;
        else
            hexa[j++] = 55 + rem;
        temp = temp / 16;
    }
    for(int i= j-1;i>=0;i--){
        cout<<hexa[i];
    }
    return 0;
}

int BinaryAddition(int n,int m){
    int x = max(n,m), y = min(n,m) ,a,b;
    int result = 0, carry = 0, place = 1;
    while(x>=0){
        a = x%10;
        b = y%10;
        result = ((a+b+carry)%2)*place + result;
        carry = (a+b+carry)/2;
        x = x/10;
        y = y/10;
        place = place*10;
        if(x == 0 && carry == 0){
            break;
        }
    }
    return result;
}

int main(){

    // int n;
    // cin>>n;

    // string n;
    // cin>>n;

    int a,b;
    cin>>a>>b;

    cout<<BinaryAddition(a,b)<<endl;;

    // DecimalToOctal(n);



    return 0;
}