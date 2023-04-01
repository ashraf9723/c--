//n=5
//rows from 1 to n
//col 1 to n-row no(space), 1 to row no (for number)
#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<j<<" ";
    }
    cout<<endl;
   }



    return 0;
}