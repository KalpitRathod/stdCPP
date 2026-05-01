#include <iostream>
#include "cudaFunction.h"

int main(){
    int SIZE=50;
    int *cpu_array = new int[SIZE];
    int *cuda_array = new int[SIZE];

    std::cout << "Original Array: [";
    for (int i = 0; i < SIZE; i++)
    {
        cpu_array[i] = i;
        cuda_array[i] = i;
        std::cout << cpu_array[i] << ",";
    }
    std::cout << "]";

    std::cout << "\nCPU implementation: [";
    for (int i = 0; i < SIZE; i++)
    {
        cpu_array[i] *= 2;
        std::cout << cpu_array[i] << ",";

    }
    std::cout << "]";

    doubleArrayCUDA(cuda_array, SIZE);
    std::cout << "\nCUDA implementation: [";
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << cuda_array[i] << ",";

    }
    std::cout << "]";
    
    return 0;
}