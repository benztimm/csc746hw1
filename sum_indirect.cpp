#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>



void 
setup(int64_t N, uint64_t A[])
{
   printf(" inside sum_indirect problem_setup, N=%ld \n", N);
   unsigned seed = 12345;
   srand(seed);
   for (int64_t i = 0; i < N; i++)
   {
      int64_t random = (int64_t)(rand() % N);
      A[i] = random;
   }
}

int64_t
sum(int64_t N, uint64_t A[])
{
   printf(" inside sum_indirect perform_sum, N=%ld \n", N);
   int64_t indirectsum = 0;
   int64_t index = 0;
   for(int64_t i = 0; i < N; i++)
   {
      index = A[i];
      indirectsum += A[index];
   }
   return indirectsum;
}


