#include <iostream>
using namespace std;

#define PI 3.14

int i = 6; //Now this is the gobal variable for all the functions...

void a(int& i){  //If you want to not creat a different variable then use &...
    cout<<i;
}
int main() {
    // We can create a macro like this:
    int r = 5;
    double area = PI * r * r;
    cout<<"The value of pie r is:"<<area<<"\n";

    // Gobal Variables....
    // Why we need gobal variables -> For this we can look to the some functions...
    // int i = 5;
    // This i is local variable for function main() only else new i..
    a(i);

    // Here starts Inline functions Luckily i really don't like this Inline 
    // because this is just a waste of key word nothing means for it..*_*.
    int a = 5, b =  6;
    int ans = 0;
    // Normal way of writting if and else..
    if(a>b){
        cout<<a<<endl;
    }
    else{
        cout<<b<<endl;
    }
    cout<<"New function..";
    // Now come short form of if, else..
    ans = (a>b)?a:b;  // Look the code..
    a = 5;
    b = 5;
    ans = (a>b)?a:b;
}
