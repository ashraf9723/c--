//WAP for floyds triangle
#include<iostream>
using namespace std;
int main(){
    // n = row
    // cout = 1 start from 1
    int n;
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }

}