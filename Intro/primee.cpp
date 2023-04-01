#include<iostream>
using namespace std;
int main(){
    //prime no have only two factors
    int n;
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"No is not prime no"<<endl;
            break;
        }

    }
    if(i==n){
       cout<<"Prime"<<endl;
    }

    
    return 0;
}