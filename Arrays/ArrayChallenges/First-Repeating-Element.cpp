#include <bits/stdc++.h>
using namespace std;

int FirstReapeatingElement(int arr[], int n)
{
    // Brute Force Approach
    // O(n^2)
    // for (int i = 0; i < n-1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] == arr[j])
    //             return i+1;
    //     }
    // }
    // return -1;

    // Optimal Approach
    // O(n)

    unordered_map<int,int> ump;
    for(int i=0;i<n;i++){
        ump[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(ump[arr[i]]>1)
            return i+1;
    }
    return -1;
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout <<FirstReapeatingElement(arr, n);

    return 0;
}