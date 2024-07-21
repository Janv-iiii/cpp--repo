//Using Switch statement....
#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Input button:";
    cin>>button;
    switch (button){
        case 'a':
        cout<<"Hii"<<endl;
        break;
        case 'b':
        cout<<"Holla"<<endl;
        break;
        case 'c':
        cout<<"coke"<<endl;
        break;
        case 'd':
        cout<<"hehe"<<endl;
        break;
        default:
        cout<<"I am still learning more"<<endl;
        break;
        
        
    }
    return 0;
}