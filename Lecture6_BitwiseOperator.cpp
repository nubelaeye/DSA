#include<iostream>
#include<math.h>
using namespace std;

int findBinary(int decimal){
   if (decimal == 0){
        int binary = 0;
   }
   else{
        int binary = decimal % 2 + 10 * (findBinary(decimal / 2));
   }
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int j = findBinary(n);
    cout<<"The Binary Representation of this decimal number system is: "<<j<<"\n";

    // Now Binary to Decimal .. 

    int in;
    cout<<"Enter the number: ";
    cin>>in;

    int ans = 0;
    int i = 0;
    
    while(in!=0){
        int digit  = in%10;
        if(digit==1){
            ans = ans + pow(2,i);
        }
    
        in = in/10;
        i++;
    }

    cout<<"Your answer is: "<<ans;
}
