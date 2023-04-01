//half pyramid with number
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //rows= 1 to n
    //col= 1 to row no
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }cout<<endl;
        
    }
    return 0;

}