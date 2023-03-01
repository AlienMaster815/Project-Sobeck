#include <stdint.h>
#include <stdint.h>

#if UINT32_MAX == UINTPTR_MAX
#define STACK_CHK_GUARD 0xe2dee395
#else
#define STACK_CHK_GUARD 0x595e9fbd94fda766
#endif

uintptr_t __stack_chk_guard = STACK_CHK_GUARD;

void __stack_chk_fail(void)
{
#if __STDC_HOSTED__
	abort();
    liz_print_str("Paninc\n");
    while 1;
#elif __is_myos_kernel
	panic("Stack smashing detected");
#endif
}
