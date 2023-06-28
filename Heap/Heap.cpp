#include<bits/stdc++.h>
using namespace std;
int main(){

    int a = 10;

    int *p = new int(); // Allocate memory in heap

    *p = 10;

    delete(p); // Deallocate memory in heap

    p = new int[4]; // Allocating an Array

    delete[] p; // Deallocating the memory given to the array

    p = NULL;

    return 0;
}