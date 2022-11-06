#include<iostream>
using namespace std;

//      In this lecture we will basically read about for loop while loop if else.                     

int main(){
    // CODE 1.
    int a, b;
    cout<<"Enter the nunber: ";
    cin>>a>>b;
    if(a>b){
      
        cout<<"A is greater than B now!";
    }
  
    else{
      
        cout<<"B is greater than A..";
    }
  
    // CODE 2.
  
    int n;
    cout<<"\n"<<"Enter the number: ";
    cin>>n;
    if(n>0){
      
        cout<<"It's a possitive nunber ";
    }
  
    else if(n==0){
        cout<<"It's Zero";
    }
  
    else{
        cout<<"It's Negativen number";
    }

   
}
