#include<bits/stdc++.h>
using namespace std;

string Movex(string s){
    if(s.length()==0){
        return "";
    }
    char ch = s[0];
    string ans = Movex(s.substr(1));
    if(ch == 'x'){
        return (ans+ch);
    }
    else{
        return (ch+ans);
    }
}

int main(){

    cout<<Movex("axxbdxcefxhix");

    return 0;
}