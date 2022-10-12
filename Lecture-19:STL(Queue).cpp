//                     STL - QUEUE
#include<queue>
#include<iostream>
using namespace std;

int main(){
    queue<string>name;
    cout<<name.size()<<endl;
    name.push("Mercury");
    name.push("Venus");
    name.push("Earth");
    name.push("Mars");
    name.push("Jupiter");
    name.push("Saturn");
    name.push("Uranus");
    name.push("Neptune");
    name.pop();
    cout<<name.front()<<endl;
    cout<<name.size()<<endl;
    // And all the functions which are in Stack..
}
