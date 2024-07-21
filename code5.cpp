//using if and else-if:
#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Input a button:";
    cin>>button;
    if(button=='a'){
        cout<<"hello";
    }
    else if(button=='b'){
        cout<<"my name";
    }
    else if(button=='c'){
        cout<<"kashish";
    }
    else if(button=='d'){
        cout<<"kanakh";
    }
    else{
        cout<<"leave it";
    }
    return 0;
}
