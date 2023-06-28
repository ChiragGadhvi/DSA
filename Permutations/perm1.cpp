#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;

// Distinct Elements

void permute(vector<int> &a,int idx){
    // After swaping element if the idx reaches the end meaning all swaping for the perticular element has been done
    if(idx == a.size()){
        ans.push_back(a);
        return ;
    }

    // Main permutation function
    for(int i=idx;i<a.size();i++){
        swap(a[i],a[idx]);
        permute(a,idx+1);
        swap(a[i],a[idx]);
    }
    return ;
}

int main() {

    // your code goes here 
    
    int n;
    cin>>n;

    // vector declaration
    vector<int> a(n);
    // add element in the vector using reference
    // here a inform the type of element and &i is storing an element in i's address
    for(auto &i:a){
        cin>>i;
    }

    // Permute function to print all possible permutaions
    // permute(a,0);

    // Using STL next_permutation
    sort(a.begin(),a.end());
    do{
        ans.push_back(a);
    }while(next_permutation(a.begin(),a.end()));

    // Printing the resultant 2d array
    for(auto v:ans){
        for(auto i:v){
            cout<<i<<" ";
        }cout<<endl;
    }
    
    return 0;
}
