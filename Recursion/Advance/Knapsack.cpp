#include<bits/stdc++.h>
using namespace std;

int Knapsack(int value[],int wt[],int n,int W){
    // Takeing the item
    // Knapsack(value,wt,n-1,W-wt[n-1])+value[n-1];
    // Not Taking the item
    // Knapsack(value,wt,n-1,W);

    if(n == 0 || W == 0){
        return 0;
    }

    if(wt[n-1]>W){
        // If the weight excedes we wont take the item
        return Knapsack(value,wt,n-1,W);
    }

    // Return max of those 
    return max(Knapsack(value,wt,n-1,W-wt[n-1])+value[n-1],Knapsack(value,wt,n-1,W));

}

int main() {

    // your code goes here 
    int value[] = {100,50,150};
    int wt[] = {10,20,30};
    int W = 50;

    cout<<Knapsack(value,wt,3,W)<<endl;
    
    
    
    return 0;
}
