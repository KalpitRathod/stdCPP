#include <cuda_runtime.h>
#include "cudaFunction.h"

// 1. The Kernel (runs on GPU)
__global__ void doubleKernel(int *d_arr, int size) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    if (idx < size) {
        d_arr[idx] *= 2;
    }
}

// 2. The Wrapper (called by main.cpp)
void doubleArrayCUDA(int *h_arr, int size) {
    int *d_arr;
    size_t bytes = size * sizeof(int);

    // Allocate GPU memory
    cudaMalloc(&d_arr, bytes);

    // Copy data from CPU to GPU
    cudaMemcpy(d_arr, h_arr, bytes, cudaMemcpyHostToDevice);

    // Launch Kernel (1 block of 256 threads is enough for size 50)
    doubleKernel<<<1, 256>>>(d_arr, size);

    // Copy result back to CPU
    cudaMemcpy(h_arr, d_arr, bytes, cudaMemcpyDeviceToHost);

    // Free GPU memory
    cudaFree(d_arr);
}