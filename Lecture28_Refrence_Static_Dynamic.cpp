#include<iostream>
using namespace std;

int update(int n){
    n++;
}
int update2(int &n){
    n++;
}

int main(){
    // In this video we will understand about Refrence and differece between
    //                  static and dynamic variables....

    // Intilizating a Refrence variable 
    // If you want to see it then you can comment it out but i am commenting now
   
    // int i = 10;
    // int &j = i;
    // cout<<i<<"\n";
    // cout<<j<<"\n";

    // Here, starts pass by value in function...
    int a = 5;
    update(a); // Really but this function doesn't work..
    cout<<"Working with normal function: "<<a<<"\n";
    update2(a); // And this works right..
    cout<<"Working with function two: "<<a<<"\n";

    // Here starts Dynamic Array...

    char ch = 'a';
    cout<<sizeof(ch)<<endl; // A char stores only 1 byte.

    char *c = &ch;
    cout<<sizeof(c)<<endl;

    // Intillizating Heap Memory Allocation...
    int *op = new int[5];
}
