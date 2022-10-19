#include<iostream>
using namespace std;

int HCF(int a, int b){
    if(a==0)
    return b; 
    if(b==0)
    return a;
    while(a!=b){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}

int main(){
    int a,b;
    cout<<"Enter the both number: ";
    cin>>a;
    cin>>b;
    int ans = HCF(a,b);
    cout<<"The Highest common factor of these numbers are: "<<ans;
}
