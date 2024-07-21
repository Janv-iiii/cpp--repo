//prime no. in a given range
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    for(int num=a;num=b;num++){
        for(int i=2;i<num;i++){
            if(num%2==0){
                cout<<"not prime";
                break;
            }
        }
    }return 0;
}

