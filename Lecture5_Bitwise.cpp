#include<iostream>
using namespace std;

int main(){
    // Four types of operators are there : and(&), or(|) , not(~), xor(^)
    // int a = 4;
    // int b = 6;
    // cout<<(a&b)<<"\n";
    // cout<<(a|b)<<"\n";
    // cout<<~a<<"\n";
    // cout<<(a^b)<<"\n";

    // Now we will study about the left and right shift operators..
    // Left Shift  - << if the input or the number is large then it will make it negative.
    // cout<<(2<<2)<<"\n"; // Left shift..  read this = (nX2). 
    // Right shift - >>
    // cout<<(10>>2)<<"\n"; // Right Shift.. read this = (n/2X2).
    
    // Incerment and decrement operators.
    // There are two types of Increment and decrement operators.
    // 1. Post Increment -> i++; first use the value and then i will increment it after.
    // 2. Pre Increment -> ++i; first i will increment and then you use the value.

    // int a = 5;
    // int b = 10;
    // cout<<a<<"\n";
    // cout<<++a<<"\n";
    // cout<<a++<<"\n";
    // cout<<a<<"\n";
    // cout<<b<<"\n";
    // cout<<b++<<"\n";
    // cout<<b<<"\n";
    // b = a++;
    // cout<<b;
    // Printing the sum of two numbers..

    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;
    
    // int sum = 0;
    // for(int i = 0;i<=n;i++){

    //     sum = sum + i;
    // }

    // cout<<sum;

    // printing the fibonacci series..

    // int n;
    // cout<<"Enter the number: ";

    // cin>>n;

    // int a = 0;
    // int b = 1;

    // for(int i = 1;i<=n;i++){

    //     int next = a+b;
    //     cout<<next<<" ";
    //     a = b;
    //     b =  next; 

    // }

    // Printing the prime number..

    int n;

    cout<<"Enter the number: ";
    cin>>n;

    bool isbool = 1;

    for(int i = 2;i<n;i++){

        if(n%i==0){
            isbool = 0;
            break;
        }

    }

    if(isbool==0){
        cout<<"Not a Prime Number";
    }

    else{
        cout<<"Prime number";
    }

    for(int i = 0;i<=5;i++){
        cout<<i<<"\n";
        i++;
    }


}
