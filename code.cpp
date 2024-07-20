//parents allow their daughter to go out only on odd days of a month...
#include<iostream>
using namespace std;
int main(){
    int pocketmoney=3000;
    for(int date=0;date<30;date++){
        if (date%2==0){
            continue;
        }
        if (pocketmoney==0){
            break;
        }
        cout<<"you can go out today";
        pocketmoney=pocketmoney-300;
        
    }
    return 0;
}


