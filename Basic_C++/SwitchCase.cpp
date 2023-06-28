#include<iostream>
using namespace std;
int main(){
    char input;
    cin>>input;

    // if(input == 'a'){
    //     cout<<"Hello"<<endl;
    // }
    // else if(input == 'b'){
    //     cout<<"Konichiwa"<<endl;
    // }
    // else if(input == 'c'){
    //     cout<<"Namaste"<<endl;
    // }
    // else if(input == 'd'){
    //     cout<<"Hola"<<endl;
    // }
    // else{
    //     cout<<"Me No Understand It."<<endl;
    // }

    switch (input)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Konichiwa"<<endl;
        break;  
    case 'c':
        cout<<"Namaste"<<endl;
        break; 
    case 'd':
        cout<<"Hola"<<endl;
        break;   
    default:
        cout<<"Me No Understand"<<endl;
        break;
    }

    return 0;
}