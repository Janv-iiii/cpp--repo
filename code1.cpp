//print no. 1 to 100 but skip those no. which are divisible by 3.
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<100;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}

