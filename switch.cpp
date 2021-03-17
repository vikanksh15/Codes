#include<iostream>

using namespace std;

int main(){
    int code;
    cout<<"Please enter the code:";
    cin>>code;
    switch(code)
    {
        case 0: 
        cout<<"You are not authorized to access\n";
        break;
        case 1: cout<<"Code verified!\n";
        break;
        default: cout<<"***Intruder Alert***\n";
        while(code >1){
            cout<<"Calling 911...\n";
            code = 0;
        }
        break;
    }
    cout<<"Press Enter then F9 to try again!";
    return 0;
}