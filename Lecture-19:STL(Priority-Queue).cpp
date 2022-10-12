//      And has usual all functions of stack are enable for queue 
#include<iostream>
#include<queue>
using namespace std;

int main(){
    // It is basically made to take out the maximum elements.may be we can use it has a sorting of an array 
    priority_queue<int> elements; // A new initllising of priority_queue for max.
    priority_queue<int, vector<int>,greater<int> > elements_min; // for min.
    elements.push(100);
    elements.push(98);
    elements.push(96);
    elements.push(90);
    elements.push(50);
    elements.push(45);
    int n = elements.size();
    for(int i =0;i<n;i++){
        cout<<elements.top()<<"\n";
        elements.pop();
    }cout<<endl;
    // Has usual we can use it is basically made to take out the minimum elements.may be we can use it has a sorting of an array 
    elements_min.push(10);
    elements_min.push(8);
    elements_min.push(9);
    int s = elements_min.size();
    for(int n = 0;n<s;n++){
        cout<<elements_min.top()<<"\n";
        elements_min.pop();
    }cout<<"\n";

}
