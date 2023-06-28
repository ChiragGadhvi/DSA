#include<bits/stdc++.h>
using namespace std;

void substr(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);

    substr(ros,ans);
    substr(ros,ans+ch);
    substr(ros,ans + to_string(code));
}


void solve(string s , string ans){
    if(s.length()==0){
        cout<<ans<<" ";
        return ;
    }

    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);

    solve(ros,ans);
    solve(ros,ans+ch);
    solve(ros,ans+to_string(code));
}

int main(){

    solve("AB","");

    return 0;
}