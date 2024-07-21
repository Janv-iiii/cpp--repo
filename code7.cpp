//A simple calculator using switch statement 
#include<iostream>
using namespace std;
int main(){
    int a,b;
    char oprator;
    cout<<"enter value for a:";
    cin>>a;
    cout<<"enter value for b:";
    cin>>b;
    cout<<"enter a oprator:";
    cin>>oprator;
    switch(oprator){
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        
        default:
        cout<<"Operator not matched";
        
        
    }
    return 0;
}