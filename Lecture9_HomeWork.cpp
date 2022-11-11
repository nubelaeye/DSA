#include<iostream>
using namespace std;

int getSum(int arr[],int size){
    int sum = 0;
    for(int i = 0;i<=size;i++){
        sum+=i;
        
    }
    cout<<sum;
    return sum;
}

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int num[100];
    for(int i = 1;i<size;i++){
        cin >> num[i];
    }
    int sum = getSum(num,size);
    cout<<"The answer is: " + sum;
}
