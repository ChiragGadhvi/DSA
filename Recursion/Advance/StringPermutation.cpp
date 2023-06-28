#include<bits/stdc++.h>
using namespace std;

void substring(string s,string ans){
    if(s.length()==0){
        cout<<ans<<" ";
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    substring(ros,ans+ch);
    substring(ros,ans);
}

void perm(string s,string ans){
    if(s.length()==0){
        cout<<ans<<" ";
        return;
    }

    for(int i=0;i<s.length();i++){
        char ch = s[i];
        string ros = s.substr(0,i) + s.substr(i+1);
        perm(ros,ans+ch);
    }
}

int main(){

    perm("ABC","");

    return 0;
}