//                 All of the STL are in Time complexity of O(1).
#include<iostream>
#include<array>
#include<vector>
#include<list>
#include<deque>
using namespace std;

//                                  ------ STL of Array ------

int main(){
    cout<<"\t\t\t\t\t\t Here starts array Functions"<<"\n";
    // normal array...
    int arr[3] = {1,2,3}; //Normal Array
    // STL array.. but they are not used as much as normal array..
    array<int,4> a = {1,2,3,4}; //Creating an STL array..
    //              --> Now its time to look the functions of it <--

        // 1.Index at : a.at();...
    cout<<"The index at 1 is: "<<a.at(1)<<endl;
        // 2.The array is empty or not : a.empty();...
    cout<<"The array is: "<<a.empty()<<endl; // But this tells us in 0 False or 1 True
        // 3.First element and the last element of the array..
    cout<<"The first element of the array is: "<<a.front()<<"\n";//First element 
    cout<<"The last element of the array is: "<<a.back()<<"\n";//Last element 

    //                  ----- STL of vector -----
    cout<<"\t\t\t\t\t\t Here vector Functions start.."<<"\n";
    vector<int> now; // This how we create the vector..

//                       --> Now let see the Functions of it <-- 
        // 1.capacity of the array if the element in the array does not fit it makes double of it..
    now.push_back(1); // Added one elements
    cout<<"The capacity of array is: "<<now.capacity()<<"\n";

    now.push_back(2); // Added two elements
    cout<<"The capacity of array is: "<<now.capacity()<<"\n";

    now.push_back(3); // Now the capacity of array is double..
    cout<<"The capacity of array is: "<<now.capacity()<<"\n";
    
    // We can also use these functions: at(), from() and back()

        //3. We can also remove last element by using pop_back();  
    for(int i:now){
        cout<<i<<"\n";
    }
    now.pop_back();
    for(int i:now){
        cout<<i<<"\n";
    }
        //4. clear Function -- But it will only clear the elements of the array not capacity of its..   
    cout<<"Before clearing the elements in array: "<<now.size()<<endl;
    now.clear();
    cout<<"After clearing the elements in array: "<<now.size()<<endl;

    //                   -----STL of deque----
    cout<<"\t\t\t\t\t Here starts Functions of Deque..."<<"\n";
    deque<int> d; // How to initilize it..
    //                 --> Now let see the Functions... <--
        // 1. push_back(),push_front()
    d.push_back(1);
    d.push_back(15);
    d.push_back(12);
    d.push_back(4);
    d.push_front(2);
        // 2. pop_front(),pop_back()
    d.pop_front();
    d.pop_back();
        // We can also use at(), front(), back(),empty(),clear()...
        // 3.erase()...
    cout<<d.size()<<"\n";
    d.erase(d.begin(), d.begin()+1);
    cout<<d.size()<<"\n";
    
    cout<<"\t\t\t\t\t\t Here starts List Functions"<<"\n";
    // normal array...
    list<int> n; //Normal List
    // We can apply all the functions above in this List.
    list<int> ne(n);//to copy the variable you can apply in the previous STLs also.. 
}
