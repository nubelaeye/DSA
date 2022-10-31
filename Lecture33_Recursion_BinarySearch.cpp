#include<iostream>
using namespace std;

// Checking that the array is sorted or not.. 

// int check(int arr[], int n){
//     if(n == 0|| n==1){  
//         return true;
//     }

//     if(arr[0]>arr[1]){
//         return false;
//     }

//     else{
//         bool ans = check(arr+1,n-1);
//         return ans; 
//     }

// }

// OK then this is the time for homework. Sorry, I can't do it but i was too close.

int Sum(int arr[], int n, int key){

    if(n==0){
        return 0;
    }

    if(n==1){
        return arr[0];
    }

    int ans;

}

int main(){

    int arr[5] = {1,2,3,4,5};
    int size = 5;

    int key;
    cout<<"Enter the number: ";
    cin>>key;
    key;

    int a = Sum(arr,size,key);
    cout<<a;
}
