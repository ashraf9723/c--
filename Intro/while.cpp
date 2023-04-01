// while loop is used when we have to do nothiing with iteration it is running until the statement is true
//while(cond is true){body}
//if false otherwise came outside the loop 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n>0){
        cout<<n<<endl;
        cin>>n;
    }
    return 0;
}
//do{body}while(condition);
//it runs atleast one time
