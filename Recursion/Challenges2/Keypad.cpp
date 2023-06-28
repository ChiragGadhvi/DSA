#include<bits/stdc++.h>
using namespace std;

string keypad[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void solve(string s,string ans){

    if(s.length()==0){
        cout<<ans<<" ";
        return ;
    }
    char ch = s[0];
    string code = keypad[ch-'0'];
    string ros = s.substr(1);
    for(int i=0;i<code.length();i++){
        solve(ros,ans+code[i]);
    }

}

void keypadsub(string s,string ans){
    if(s.length()==0){
        cout<<ans<<" ";
        return ;
    }
    char ch = s[0];
    string ros = s.substr(1);
    string code = keypad[ch-'0'];
    for(int i=0;i<code.length();i++){
        keypadsub(ros,ans+code[i]);
    }

}

int main(){

    keypadsub("235","");

    return 0;
}