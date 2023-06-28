#include<iostream>
using namespace std;
int main(){

    int i; // declaration 
    i = 34; // initialization
    cout<<"Size of integer is:"<<sizeof(i)<<" "<<i<<endl; // size of integer is 4 bytes

    float f;
    f = 1.234567;
    cout<<"Size of float is:"<<sizeof(f)<<" "<<f<<endl; // size of float is 4 bytes can only print 7 decimal places

    f = 1.2345678;
    cout<<f<<endl; // Can only print 7 decimal places

    double d;
    d = 1.2345678;
    cout<<"Size of double is:"<<sizeof(d)<<" "<<d<<endl; // Size of double is 8 bytes and can print 15 decimal places

    char c;
    c = 'a';
    cout<<"Size of character is:"<<sizeof(c)<<" "<<c<<endl;

    bool b;
    cout<<"Size of bool is:"<<sizeof(b)<<endl;

    short int si;
    long int li;
    cout<<"Size of ShortInt is:"<<sizeof(si)<<endl;
    cout<<"Size of LongInt is:"<<sizeof(li)<<endl;

   
}