#include<iostream>
using namespace std;

// First look all the down side code then come here:]
// updating value by function..
void update(int **p){
    // First change tried...
    // p = p +1; // Failed :]
    // Second change tried..
    // *p = *p + 1; // Passed :]
    // Third change tried..
    **p = **p +1; // 
}

int main(){
    int a = 5;
    int *p = &a;
    int **p2 = &p;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;

    cout<<"Here is all right";
    
    // You can add the pointers as much as you want..
    
    cout<<"Printing all the values: "<<"\n";
    cout<<"Before: "<<p2<<"\n";
    cout<<a<<"\n";
    cout<<p<<"\n";
    cout<<*p2<<"\n";
    cout<<**p3<<"\n";
    cout<<***p4<<"\n";
    cout<<****p5<<"\n";

    // Here's for printing the same location now..
    // Checking that which of the try works in real..

    cout<<"Checking the function: "<<"\n";
    
    update(p2);
    cout<<"After: "<<p2<<"\n";
    cout<<a<<"\n";
    cout<<p<<"\n";
    cout<<*p2<<"\n";
    cout<<**p3<<"\n";
    cout<<***p4<<"\n";
    cout<<****p5<<"\n";    

}
