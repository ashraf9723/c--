//rows 1 to n
//col n to 1-row no(space), 1 to n(star) 
// space ke liye alg loop
//star ke liye alag
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";

        }
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    } 
    return 0;
}
