#include <bits/stdc++.h>
using namespace std;

// check if the Block is Safe to visit
bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

// RatInMaze Function
bool RatInMaze(int **arr, int x, int y, int n, int **solArr)
{
    if(x==n-1 && y==n-1){
        solArr[x][y] = 1;
        return true;
    }

    if (isSafe(arr, x, y, n))
    {
        solArr[x][y] = 1;
        // Check if Rat can move in x direction
        if (RatInMaze(arr, x + 1, y, n, solArr))
        {
            return true;
        }
        // Check if Rat can move in y direction
        if (RatInMaze(arr, x, y + 1, n, solArr))
        {
            return true;
        }
        // Backtrack Set if the rat can no longer move in x or y direction
        solArr[x][y] == 0;
        return false;
    }
    return false;
}

int main()
{

    // your code goes here
    int n;
    cin>>n;

    // Dynamic Allocation of Memory
    int** arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i] = new int[n];
    }

    // Input of 2d Array
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    // Solution Array dynamic memery allocation
    int** solArr = new int*[n];
    for(int i=0;i<n;i++){
        solArr[i] = new int[n];
        for(int j=0;j<n;j++){
            solArr[i][j] = 0;
        }
    }

    // Caling out RatInMaze function
    if(RatInMaze(arr,0,0,n,solArr)){
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<solArr[i][j]<<" ";
        }cout<<endl;
    }
    }

    return 0;
}


// 1 0 0 0 0
// 1 1 1 1 0
// 0 0 0 1 0
// 0 0 0 1 1
// 0 0 0 0 1