//making pattern using cpp
#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"enter no. of rows"<<endl;
    cin>>rows;
    int columns;
    cout<<"enter no. of columns"<<endl;
    cin>>columns;
  
    for (int i=1;i<=rows;i++){
        for (int j=1;j<=columns;j++){
            cout<<'*';
        }
        cout<<endl;
    }

    return 0;
}