#include<iostream>
using namespace std;

bool ispresent(int arr[][4], int target,int row,int col){
    
    
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            if(arr[i][j]==target){
                return 1;
            }
        }  
    }
    return 0; 
}
int main(){
    //Initiallizing
    int arr[3][4];
    // int arr[5][5];
    // Another method of doing it..
    // int r[4][5] = {{1111,2222,3333,4444,5555},{1111,2222,3333,4444,5555},{1111,2222,3333,4444,5555},{1111,2222,3333,4444,5555}};
    
    //Taking input by the runner...
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    // And here is the output command..
     for(int i = 0; i<4; i++){
        for(int j = 0; j<5; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Enter the number: ";
    int target;
    cin>>target;
    if(ispresent(arr,target,3,4)){
        cout<<"Yes, it is present in the array..";
    }
    else{
        cout<<"No, it is not present in the array..";
    }

}
