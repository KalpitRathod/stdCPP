/*
Use std::vector when number of items is unknown before-wise
-> #include <vector> to use std::vector
-> Vector is implemented as a dynamic table
-> Create similarly to the std::array:
    -> ^17 std::vector vec{1, 2, 3};
    -> ^17 std::vector vec = {1, 2, 3};
    -> ^11 std::vector<int> vec{1, 2, 3};
    -> ^11 std::vector<int> vec = {1, 2, 3};
-> Access stored elements just like in std::array
But we can also change the accessed values!
Use std::vector a lot! It is fast and flexible!
Think of it as a default container to store items
Cannot be constexpr v20

Modify contents of vectors
-> Remove all elements: vec.clear()
-> Add a new item in one of two ways:
    ->^11 vec.emplace_back(value)
    -> vec.push_back(value) -histotorically better known
-> Resize vector with vec.resize(new_size)
    ->If new_size is smaller than vec.size() the elements at the end of the vector will be destroyed
    -> Otherwise, new uninitialized elements will be added
        Use vec.resize(new_size, value) to initialize them
-> Reove last element with vec.pop_back()
    -> Make sure vector is not empty! UB otherwise!

Optimize vector resizing
-> Adding elements to std::vector changes its size
-> Changing size moght allocate memory, which is slow
-> If we expact to add elements often, we can optimize!
-> reserve(n) allocate enough memory to store n items but does not change the size() of the vector
-> This is a very important optimization
-> Do it if you know (even just approximately) the number of elements you plan to add in advance

// Somewhere in some function
std::vector<std::string> vec;
const int number_of_iterations = 100;
vec.reserve(number_of_iterations);
for (int i = 0; i < kItemNum; ++i) {
    vec.emplace_back("hello");
}
*/

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    const vector numbers = {1, 2, 3};
    vector<std::string> jedi = {"Yoda", "Anakin"};
    jedi.reserve(jedi.size() + 1UL);
    jedi.push_back("Obi-Wan");
    cout << "Some Jedi: " << jedi.front() << endl;
    cout << "Last Jedi: " << numbers.back() << endl;
    return 0;
}
