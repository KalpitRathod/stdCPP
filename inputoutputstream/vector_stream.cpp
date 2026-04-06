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
*/