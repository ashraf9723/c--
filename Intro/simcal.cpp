// Implement a simple calculator
#include<iostream>
using namespace std;
int main(){
    float n1,n2;
    cout<<"Input two number";
    cin>>n1>>n2;

    char op;
    switch (op)
    {
        case '+':
        cout<<n1+n2<<endl;
        break;

        case '-':
        cout<<n1-n2<<endl;
        break;

        case '*':
        cout<<n1*n2<<endl;

        default:
        cout<<"Error"<<endl;
    }
    return 0;
}