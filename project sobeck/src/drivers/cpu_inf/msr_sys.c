#include "alpha_variables.h"
#include "cpu_inf.h"

const uint32_t CPUID_FLAG_MSR = 1 << 5;

uint8_t cpuHasMSR()
{
   static uint32_t a, d; // eax, edx
   cpuid(1, &a, &d);
   return d & CPUID_FLAG_MSR;
}

void cpuGetMSR(uint32_t msr, uint32_t *lo, uint32_t *hi)
{
   asm volatile("rdmsr" : "=a"(*lo), "=d"(*hi) : "c"(msr));
}

void cpuSetMSR(uint32_t msr, uint32_t lo, uint32_t hi)
{
   asm volatile("wrmsr" : : "a"(lo), "d"(hi), "c"(msr));
}
