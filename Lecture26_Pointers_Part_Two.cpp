#include<iostream>
using namespace std;

int printd(int arr,int *pointer ){
    cout<<*pointer+1;
}

int main(){
    int arr[10] = {23,4,3,4,23};

    // Printing array with different method... 

    cout<<arr<<"\n";
    cout<<&arr<<"\n";
    cout<<&arr[0]<<"\n";
    
    // Operartions in pointers..

    cout<<*arr<<"\n";
    cout<<*arr+1<<"\n";
    cout<<*arr*2<<"\n";

    // Using pointers in functions...

    
   int arr[10];

    //ERROR....
   //arr = arr+1;

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;

    // pointers in char array...

    char ch[6] = "abcde";


    cout << arr << endl;
    //attention here
    cout << ch << endl;
    
    char *c = &ch[0];
    //prints entire string
    cout << c << endl;

    char temp = 'z';
    char *p = &temp;

    cout << p << endl;

    // Adding pointer of different data types...
    int a = 5;
    char c = 'q';
    float j = 5.9;
    double o = 20000;
    
//     Theirs nothing need to write all the pointer for each data types just write like this..
//     example -->
    double *c = &o;
    


}
