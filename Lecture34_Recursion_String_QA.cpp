#include<iostream>
#include<math.h>
using namespace std;

// Question number 4. Bubble Sort

int Sort(int arr[],int n){

    if(n==0||n==1){
        return true;
    }

    for(int i = 0; i<n ; i++){
        if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
    }

    Sort(arr,n-1);
}

// Question number 3.

int Power(int a,int b){

    // Base 
    if(a==0){
        return 1;
    }

    if(a==1){
        return 1;
    }

    // Recursive call..
    int n = pow(a,b);
    return n;

}

// Question number 2.

int Pelindrome(string name,int i,int j){
    
    if(i>j){
        return true;
    }
    if(name[i]!=name[j]){
        return false;
    }
    else{
        return Pelindrome(name,i+1,j-1);
    }

}
// Question number 1.

int Reverse(string &a,int i, int j){

    if(i>j){
        return -1;
    }
    swap(a[i],a[j]);
    i++;
    j--;

    Reverse(a, i, j);
}

int main(){
    // Question number 1. - Reverse the String...

    string name = "abbccbba";
    Reverse(name, 0, name.size()-1);
    cout<<"The reverse name of your is: "<<name<<endl; 

    bool isPelindrome = Pelindrome(name, 0, name.length()-1);
    if(isPelindrome){
        cout<<"It is a Pelindrome"<<"\n";
    }

    else{
        cout<<"Not a Pelindrome"<<"\n";
    }

    int o,p;
    cout<<"Enter the number: ";
    cin>>o>> p;
    int k = Power(o,p);
    cout<<"The answer is: "<<k<<"\n";

    int arr[5] = {1,2,4,22,110};
    bool isSorted = Sort(arr, 5);
    if(isSorted){
        cout<<"It, is an sorted array";
    }
    else{
        cout<<"It, is not sorted array";
    }

}
