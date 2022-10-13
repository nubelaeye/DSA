//                       Reversing the array with the help of the vector
#include<iostream>
#include<vector>
using namespace std;

vector<int> rev(vector<int> v){
    int s = 0;
    int e = v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
vector<int> print(vector<int>v){
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<"\n";
    }
    cout<<"\n";
}


int main(){
    vector<int> reverse;
    reverse.push_back(10);
    reverse.push_back(9); 
    reverse.push_back(8);
    reverse.push_back(7);
    reverse.push_back(6);
    reverse.push_back(5);
    reverse.push_back(4);
    reverse.push_back(3);
    reverse.push_back(2);
    reverse.push_back(1);
    reverse.push_back(0);

    vector<int> ans = rev(reverse);
    print(ans);    
}
