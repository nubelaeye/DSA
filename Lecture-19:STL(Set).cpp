//                    Here the Time complexity changes into O(logn).
#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> number;
    number.insert(1);
    number.insert(1);
    number.insert(2);
    number.insert(3);
    number.insert(3);
    number.insert(4);
    for(auto i:number){
        cout<<i<<" ";
    }
    //              WE can use some spicy functions now that are:-
    // insert
    // being
    // cbeing
    // cend
    // clear
    // count
    // crbegin
    // crend
    // emplace
    // emplace_hint
    // empty
    // end
    // equal_range
    // erase
    // find
    // get_allocator
    // key_comp
    // lower_bound
    // max_size
    // rend
    // size
    // swap
    // upper_bound
    // value_comp

}
