#include <cstdio>
#include <limits>

int main(){
    std::printf("Min: %d, Max: %d\n", 
        std::numeric_limits<int>::min(),
        std::numeric_limits<int>::max());

    return 0;
}
