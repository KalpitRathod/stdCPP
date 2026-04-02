#include <cstdio>
#include <limits>

int main() {
    // Fundamental Types Min/Max
    std::printf("--- Fundamental Types Limits ---\n");
    
    std::printf("char: Min: %d, Max: %d\n", 
        std::numeric_limits<char>::min(), std::numeric_limits<char>::max());
        
    std::printf("int: Min: %d, Max: %d\n", 
        std::numeric_limits<int>::min(), std::numeric_limits<int>::max());
        
    std::printf("short: Min: %d, Max: %d\n", 
        std::numeric_limits<short>::min(), std::numeric_limits<short>::max());
        
    std::printf("long: Min: %ld, Max: %ld\n", 
        std::numeric_limits<long>::min(), std::numeric_limits<long>::max());
        
    std::printf("float: Min: %e, Max: %e\n", 
        std::numeric_limits<float>::min(), std::numeric_limits<float>::max());
        
    std::printf("double: Min: %e, Max: %e\n", 
        std::numeric_limits<double>::min(), std::numeric_limits<double>::max());
        
    std::printf("bool: Min: %d, Max: %d\n", 
        std::numeric_limits<bool>::min(), std::numeric_limits<bool>::max());

    // Unsigned Types
    std::printf("\n--- Unsigned Types Limits ---\n");
    
    std::printf("unsigned int: Min: %u, Max: %u\n", 
        std::numeric_limits<unsigned int>::min(), std::numeric_limits<unsigned int>::max());
        
    std::printf("unsigned long: Min: %lu, Max: %lu\n", 
        std::numeric_limits<unsigned long>::min(), std::numeric_limits<unsigned long>::max());

    return 0;
}