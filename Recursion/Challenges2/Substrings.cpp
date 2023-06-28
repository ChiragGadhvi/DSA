#include<bits/stdc++.h>
using namespace std;

void substring(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl ;
        return ;
    }
    
    char ch = s[0];
    string ros = s.substr(1);
    
    substring(ros,ans);
    substring(ros,ans+ch);
}


void solve(string s,string ans){

    if(s.length()==0){
        cout<<ans<<" ";
        return ;
    }
    char ch = s[0];
    string ros = s.substr(1);

    solve(ros,ans);
    solve(ros,ans+ch);
}
int main(){

    solve("ABC","");

    return 0;
}