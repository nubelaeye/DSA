#include<iostream>
using namespace std;

int reachHome(int destination,int currentLocation){
    // Base code
    cout<<"Started right now.."<<"\n";
    cout<<"Current Location: "<<currentLocation<<"Destination: "<<destination<<"\n";
    if(currentLocation==destination){
        cout<<"Welcome home:";
        return NULL;
    }
    currentLocation++; // Recursive call
    reachHome(currentLocation,destination);
}
int main(){
    // Basically we will look one more example of Recursion..
    int destination = 20;
    int currentLocation = 1;
    reachHome(currentLocation,destination);
}
