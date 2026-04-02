//varialbe of fundamental type
#include <cstdio>

int main(){
    char caret_return = '\n';
    int meaning_of_life = 42;
    short smaller_int{42};
    long bigger_int = 42L;
    float fraction = 0.0f;
    double precise_num = 0.0;
    double scientific = 2.43e-10;
    auto some_int{42};
    auto some_float = 13.0F;
    auto some_double = 13.0;
    bool this_is_fun = false;

    //There are also unsigned equivalents for integer types
    unsigned int meaning_of_life = 42U;
    unsigned long bigger_int = 42UL;
    auto number = 42'232'434ul;
    auto number_copy = number;
    unsigned long explicit_copy = number;

    return 0;
}
