/*
-> Handle stdin, stdout and stderr:
    ->std::cin-maps to stdin
    ->std::cout-maps to stdout
    ->std::cerr-maps to stderr
-> #include <iostream> to use I/O streams
-> Easier to use than std::printf but slower

-> #include <utitlity> to use std::pair
-> Allows storing values of two types std::pair<T1, T2>
    std::pair<int, std::string>> pair{42, "The answer"};
-> ^17 The types will be guessed by the compiler:
    std::pair pair{42, "The answer"};
->Access the data with .first and .second
*/
#include <iostream>
#include <utility>

int main() {
    int some_number{42};

    std::cin >> some_number;
    std::cout << "number = " << some_number << std::endl;
    std::cerr << "boring error message" << std::endl;

    std::pair pair{"The answer", 42};
    std::cout << pair.first << " is " << pair.second << std::endl;
    return 0;
}