//#include is preprocessor directive used to include files
//iostream is a header file for taking input and printing output
#include<iostream>
using namespace std;
//cout is used to print and it works only whenn we will import the header file iostream
//main tells the  compiler that from where the code is started
int main(){
    int amount1;
    
    

    cin>>amount1;

//cin is used to take the input
//>> this is insertion operation for taking input
 //<< this is extraction operator for output
    int amount2;
    //; means statement is end
    cin>>amount2;

    int sum=amount1+amount2;
    cout<<sum;

    
    
    return 0;
    //return tells that function is end and you can now exit from it

}