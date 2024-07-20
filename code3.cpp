//wheather the no. is prime or not 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"non prime no.";
            break;
        }
    }
    cout<<"it is a prime no.";
    return 0;
}
