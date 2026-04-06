/*
Use std::array for fixed size collections of items of same type

-> ^11 #include <array> to use std::array
-> size must be known at the compile time
-> Create from data:
^17 std::array arr = {1, 2, 3};
^17 std::array arr{1, 2, 3};
^14 std::array<int, 3UL> arr{1, 2, 3};
^11 std::array<int, 3UL> arr = {1, 2, 3};
11 std::array<int, 3UL> arr = {{1, 2, 3}};
-> In the newer standards, compiler guesses type and size
-> Beware of double brackets in C++11!

Access elements in an array
-> Check if container is empty with arr.empty()
-> Get number of stored values with arr.size()
-> Indexing from 0UL up to arr.size() - 1UL
-> Get element by index without bound check with [index]
    -> Make sure the element exits! UB otherwise!
-> Get element by index with bound check with .at(index)
-> Useful access aliases:
    ->First item: arr.front() <=> arr[0UL]
    ->Last item: arr.back() <=> arr[arr.size() - 1UL]
*/

#include <array>
#include <iostream>

int main() {
    const std::array arr{1, 2, 3};
    std::cout << arr[0] << " " << arr.back() << std::endl;
    return 0; 
}

