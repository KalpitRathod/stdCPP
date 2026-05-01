#include <iostream>
#include <cuda_runtime.h>

int main() 
{
    int deviceId;
    cudaDeviceProp deviceProp;

    // Use () for function calls
    cudaGetDevice(&deviceId); 
    cudaGetDeviceProperties(&deviceProp, deviceId);

    std::cout << "Device name: " << deviceProp.name << "\n";
    std::cout << "Max threads per block: " << deviceProp.maxThreadsPerBlock << "\n";
    // Fixed the label here to "Multi-processor count"
    std::cout << "Multi-processor count: " << deviceProp.multiProcessorCount << "\n";

    return 0;
}