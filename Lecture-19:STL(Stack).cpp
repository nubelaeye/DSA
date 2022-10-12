// If you have not watched my first code of lecture19-STL then go pls wit-watch it.
#include<stack>
#include<iostream>

using namespace std;
int main(){
    stack<string> a;
    a.push("Mercury");
    a.push("Venus");
    a.push("Earth");
    a.push("Mars");
    a.push("Jupiter");
    a.push("Saturn");
    a.push("Uranus");
    a.push("Neptune");
    // cout<<a.top();
    cout<<a.size()<<"\n";
    a.emplace();
    cout<<a.size();

    // We can also use push, top, size,

}
