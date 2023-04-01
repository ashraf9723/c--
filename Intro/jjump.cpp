//it controls the flow of loop at some specified conditions
#include<iostream>
using namespace std;

int main(){

    for(int i=0; i<100; i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;

    }
}      //continue statement is used to skip next iteration of the loop
        //break is used to terminate the loop