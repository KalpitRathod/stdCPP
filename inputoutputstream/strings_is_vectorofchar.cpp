/*
Strings are vectors of chars
-> #include <string> to use std::string
-> Access contents just like in vectors or arrays
-> Concatenate strings with +
-> using std::string_literals::operator" "s;
    allows to use an s string literal suffix (like f for float)
-> Not available at compile time, cannot be constexpr

Converting to and from strings
-> Use std::to_string to convert variables of fundamental types to std::string
-> Use std::sto[i|d|f|ul] etc. to convert from strings:
    -> std::stoi - std::string->int
    -> std::stof - std::string->float
    -> std::stod - std::string->double
    -> std::stoul - std::string->unsigned long
    -> There are more!

// Somewhere in some function
const int starting_number{42};
const std::string some_string{std::to_string(starting_number)};
int recovered_number{std::stoi(some_string});
// It will even ignore the text!
int another_numberstd::stoi("42")};
// Try it with other types and negative numbers too!

Some related caveats
-> Technically std::string is not a sequence container
-> Be careful when creating containers with strings:
-> Reason: compiler will use C-style char array instead of std::string as a storage type
-> std::vector has a special 2-element constructor:

const std::size_t size{10}
const int content{42};

// Creates a vector of 10 elements and fills ot woth value 42
// Note the round brackets!
const std::vector vec__full_of_42(size, content);

// Using curly brackets creates vector with elemts {10, 42}
const std::vector vec_10_and_42{size, content};

//std::vector<bool> is weird!
Reason: it does not behave like a vector, which is confusing
Use only if you know that you're doing (probably don't)

^17 Aggregate initialization
-> Used to initialize multiple variables at the same time
-> We must use auto
-> Also supports const and references (&)
-> Examples with std::array:

const std::array arr{1, 2, 3};
// Initialize a = 1, b = 2, c = 3
const auto [a, b, c] = arr;

-> Example with std::pair:
using std::string_literals::operator""s;
const std::pair pair{"Hello"s, "World"s};
// Initialize hello = "Hello", world = "World"
const auto& [hello, world] = pair; // Note the &

Other sequence containers
-> There are more containers:
    -> std::deque (we might cover later)
    -> std::list
    -> ^11 std::forward_list
-> The can be useful but are a lot less often used (figure out list )
*/

#include <iostream>
#include <string>
int main() {
    using std::string_literals::operator""s;
    const std::string hello = "Hello"s;
    std::cout << "Type your name:" << std::endl;
    std::string name{}; //Init empty
    std::cin >> name; //Read name
    std::cout << hello + ", "s + name + "! "s << std::endl;
    std::cout << "Name length is " << name.size() << std::endl;
    return 0;
}