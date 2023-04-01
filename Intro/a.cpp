#include<iostream>
using namespace std;
int main(){
    int a;//declaration
    a=12; //Initialisation

    cout<<"size of int"<<sizeof(a)<<endl;

    float b;
    cout<<"size of float"<<sizeof(b)<<endl;
    char c;
    cout<<"size of char"<<sizeof(c)<<endl;
    bool d;
    cout<<"size of bool"<<sizeof(d)<<endl;
    signed int si;
    cout<<"size of signed int"<<sizeof(si)<<endl;
    long long int lli;
    cout<<"size of long long int"<<sizeof(lli)<<endl;
    double db;
    cout<<"size of double"<<sizeof(db)<<endl;

    return 0;
}
