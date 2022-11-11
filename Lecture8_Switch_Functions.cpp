#include<math.h>
#include<iostream>
using namespace std;

// Function 1. 
// int power(int n, int m){
//     int ans = pow(n,m);
//     cout<<ans;
// }


// Function 2.
// int Number(int n){
//     if(n%2==0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// Function 3.

int isPrime(int n){
    for(int i = 2;i<n;i++){
        if(n%i==0){
            cout<<"Prime number";
            break;
        }
        else{
            cout<<"Not a Prime number";
            break;
        }
    }
}

int main(){
    // int o;
    // cout<<"Enter 1 to print the 100 notes and 2 to print 20 notes and 3 for 1 notes.."<<"\n";
    // cin>>o;
    // int a = 1330;
    // int b = 1330/100;
    // int r = 1330%100;
    // int c = r/20;
    // int e = c%20;
    // int d = e/1;
    // switch(o){
    //     case 1:
    //         cout<<"The total note of Hunder is: "<<b;
    //         break;
    //     case 2:
    //         cout<<"The total note of Twenty is: "<<c;
    //         break;
    //     case 3:
    //         cout<<"The total note of one is: "<<d;
    //         break;
    //     default:
    //         cout<<"You have entered wrong input so no money has been counted...";
    //         break;
    
    //Functions... 
    // int n;
    // cout<<"Enter the nuber: ";
    // cin>>n;
    // int m;
    // cout<<"Enter the number: ";
    // cin>>m;
    // power(n,m);
    
    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;
    // if(Number(n)){
    //     cout<<"Even";
    // }
    // else{
    //     cout<<"Odd";
    // }

    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int a = isPrime(n);

}
