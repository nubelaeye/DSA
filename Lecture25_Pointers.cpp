#include<iostream>
using namespace std;

int main(){
    int n = 5;
    // Address of operator - &
    // And here it goes how to impliment it -> it will be in hexadecimal form..
    cout<<"Address of n is: "<<&n<<endl; 
    // Declartion of pointer..
    int *ptr = &n;
    cout<<"The value is: "<< *ptr;
    // If you don't put the * then it will print the address of it. And if you put * then it will print value of the variale stored in it...
}
