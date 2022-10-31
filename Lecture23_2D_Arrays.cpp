#include<iostream>
using namespace std;

int main(){
    //Initiallizing
    int arr[5][5];
    
    //Taking input by the runner...
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    // And here is the output command..
     for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

}
