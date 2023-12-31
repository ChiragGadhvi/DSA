#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }// 1 2 3

    //Using Iterator
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }// 1 2 3

    //Using auto keyword
    for(auto element:v){
        cout<<element<<" ";
    }// 1 2 3

    v.pop_back(); // 1 2

    vector<int> v2 (3,50);
    for(auto element:v2){
        cout<<element<<" ";
    } // 50 50 50
    cout<<endl;
    swap(v,v2);
    for(auto element:v){
        cout<<element<<" ";
    }// 50 50 50
    for(auto element:v2){
        cout<<element<<" ";
    }// 1 2
    cout<<endl;
    sort(v2.begin(),v2.end());
    for(auto element:v){
        cout<<element<<" ";
    }

    return 0;
}