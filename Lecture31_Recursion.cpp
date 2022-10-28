#include<iostream>
#include<math.h>
using namespace std;

// Definition of recursion is: When a function calls itself is known as recursion..
// ** In Recursion the Base and Recursion are mendatory and Base case should have a return case..**

// Question 1.
int fact(int n){

    if(n==0)// Base Case
        return 1;

    return n * fact(n-1);//Recursion relation
}
// Question 2.
int powe(int n){
    if(n==0) // Base case.
        return 1;

    int smaller = powe(n-1);
    int big = 2 * smaller;//Recursion relation
    return big;
}
// Question 3.
int printCounting(int n){
    if(n==0){//Base case
        return 0;
    }
    cout<<n<<"\n";
    printCounting(n-1);//Recursion relation
}

int main(){
    int n;
    cin>>n;

    int ans = fact(n);
    cout<<ans<<"\n";
    cout<<"Question number 1.";

    int ans2 = powe(n);
    cout<<ans2<<"\n";
    cout<<"Question number 2.";

    int ans3 = printCounting(n);
    cout<<ans3<<"\n";
    cout<<"Question number 3.";

}
