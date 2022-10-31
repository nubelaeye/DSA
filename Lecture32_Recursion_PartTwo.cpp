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
// Question of Recusion Part Two :-
#include<iostream>
using namespace std;

// Question number 1.
int fibanacciSeries(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int ans = fibanacciSeries(n-1)+fibanacciSeries(n-2);
    return ans;
}
// Homework... Say Digits.
int SayDigit(int n,string arr[]){
    if(n==0){
        return 0;
    }
    int digit = n%10;
    n = n/10;
    SayDigit(n,arr);
    cout<<arr[digit]<<" ";
}
int main(){
    // int n;
    // cin>>n;
    int c;
    cin>>c;
    string arr[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    // int a = fibanacciSeries(n);
    // cout<<a<<"\n";
    
    int a2 = SayDigit(c,arr);
    cout<<a2;

    return 0;
}
