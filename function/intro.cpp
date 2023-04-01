// formula for factorial 
// factorial of n,n!=n*n-1*n-2...........2*1
// function is a piece of code that perform specific task
// return type = function name(parameters)//function body
//WAP to print prime no bt a and b using fn
#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}