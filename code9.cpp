//Rectangle using pattern 
#include<iostream>
using namespace std;
int main (){
    int row;
    cout<<"Enter row";
    cin>>row;
    int column;
    cout<<"Enter column";
    cin>>column;
    for (int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            if(i==1 or i==row or j==1 or j==column){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }cout<<endl;
    }return 0;
}