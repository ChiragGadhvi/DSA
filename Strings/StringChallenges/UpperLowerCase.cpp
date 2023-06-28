#include<bits/stdc++.h>
using namespace std;

void Upper(string str){
    for(int i=0;i<str.size();i++){
        if(str[i] >='a' && str[i] <= 'z')
        str[i] -= 32;
    }
    cout<<str<<endl;
}

void Lower(string str){
    for(int i=0;i<str.size();i++){
        if(str[i] >='A' && str[i] <= 'Z')
        str[i] += 32;
    }
    cout<<str<<endl;
}


int main(){

    // string str = "asdfasdfa";

    // // To UpperCase

    // for(int i=0;i<str.size();i++){
    //     str[i] -= 32;
    // }
    // cout<<str<<endl;

    // // To LowerCase

    // for(int i=0;i<str.size();i++){
    //     str[i] += 32;
    // }

    // cout<<str<<endl;

    string str = "FtrYTRYfytFyYGfyFygf";

    // To Lower Case and Uppercase

    // Upper(str);

    // Lower(str);

    transform(str.begin(),str.end(),str.begin(), :: toupper);
    cout<<str<<endl;

    transform(str.begin(),str.end(),str.begin(), :: tolower);
    cout<<str<<endl;

    return 0;
}